#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int n = last-first;
  T *arr = new T[mSize+n]();
  int pos = position - begin();
  for(int i = 0;i<pos;i++){
    arr[i] = mData[i];
  }
  for(int i=pos;i<pos+n;i++){
    arr[i] = *first;first++;
  }
  for(int i = pos+n;i<mSize+n;i++){
    arr[i] = mData[pos++];
  }

  delete [] mData;
  mData = arr;
  mSize+=n;

}

#endif
