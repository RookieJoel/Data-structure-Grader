#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  if (mSize == 0) return;  

  mFront = (mFront + mCap - 1) % mCap;

  mData[mFront] = mData[(mFront + mSize) % mCap];
}

#endif
