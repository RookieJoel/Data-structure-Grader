#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T temp = mData[idx];
    while(idx > 0){
        size_t p = (idx-1)/4;
        if(mLess(temp,mData[p])) break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = temp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
T tmp = mData[idx];
  size_t c;
  while ((c = 4 * idx + 1) < mSize) {
    size_t maxChild = c;  // child 1
    if (c + 1 < mSize && mLess(mData[maxChild], mData[c + 1])) maxChild = c + 1;
    if (c + 2 < mSize && mLess(mData[maxChild], mData[c + 2])) maxChild = c + 2;
    if (c + 3 < mSize && mLess(mData[maxChild], mData[c + 3])) maxChild = c + 3;
    if (mLess(mData[maxChild], tmp)) break;
    mData[idx] = mData[maxChild];
    idx = maxChild;
  }
  mData[idx] = tmp;
}

#endif

