void shift(int k) {
    if (k > 0) {
        k %= mSize;
        auto it = begin();
        for (int i = 0; i < k; i++) {
            it++;
        }
        mHeader->next->prev = mHeader->prev; 
        mHeader->prev->next = mHeader->next; 

        mHeader->next = it.ptr;         
        mHeader->prev = it.ptr->prev;   

        it.ptr->prev->next = mHeader;      
        it.ptr->prev = mHeader;              
    }else{
        
        auto it = begin();
        for (int i = 0; i < k-1; i++) {
            it++;
        }
        mHeader->next->prev = mHeader->prev; 
        mHeader->prev->next = mHeader->next; 

        mHeader->next = it.ptr;         
        mHeader->prev = it.ptr->prev;   

        it.ptr->prev->next = mHeader;      
        it.ptr->prev = mHeader;   
	}
}
