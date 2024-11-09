void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if(mSize == 0) return;
    int cond = mSize%2;
    int n = mSize/2;
    auto it = iterator(mHeader->next);
    if(cond == 1) n++;

    for(int i =0;i<n-1;i++) it++;
    auto next_it = it;
    next_it++;

    //List1
    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev = it.ptr;
    it.ptr->next = list1.mHeader;

    list1.mSize+=n;

    //list2 
    list2.mHeader->prev->next = next_it.ptr;
    next_it.ptr->prev = list2.mHeader->prev ;
    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mSize+=(mSize-n);
    
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}
