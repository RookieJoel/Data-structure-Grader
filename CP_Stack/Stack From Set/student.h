#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING

template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  int n = std::distance(first,last);
  mData = new T[n]();
  mSize = n;
  mCap = n;
  for(int i = mSize-1;i>=0;i--){
    mData[i] = *first;
    first++;
  }

}

#endif
