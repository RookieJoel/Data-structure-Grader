#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  int idx = 0,c;
  while ((c = 2 * idx + 1) < mSize) {
      T parent = mData[idx];
      if (c < mSize && mLess(parent,mData[c])) return false; //check ลูกซ้าย
      if (c + 1 < mSize && mLess(parent,mData[c+1])) return false; //check ลูกขวา
      idx++;
    }
  return true;
}

#endif