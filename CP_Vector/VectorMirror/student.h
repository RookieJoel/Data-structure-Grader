#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  int cap = mSize*2;
  T *arr = new T[cap]();
  for(int i = 0;i<mSize;i++){
    arr[i] = mData[i];
  }

  T *rev = new T[mSize]();
  int j=0;
  for(int i = mSize-1;i>=0;i--){
    rev[j++] = mData[i];
  }

  // for(int i =0;i<mSize;i++) std::cout << rev[i] << " "<<std::endl;

  int k = 0;
  for(int i = mSize;i<2*mSize;i++){
    arr[i] = rev[k++];
  }

  delete [] mData; 
  delete [] rev;
  mData = arr;
  mCap = cap;
  mSize = cap;
}

#endif
