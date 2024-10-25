#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  ensureCapacity(2*mSize);
  int k=mSize-1;
  for(int i=mSize;i<2*mSize;i++){
    mData[i] = mData[k--];
  }
  mSize*=2;
}

#endif
