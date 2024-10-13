#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  std::vector<std::vector<T>> ans(k);
  std::vector<T> sub;
  for(int i =0;i<k;i++){
    sub = {};
    int x =0;
    while(i+x<mSize){
      sub.push_back(mData[mSize-(i+x)-1]);
      x+=k;
    }
    std::reverse(sub.begin(),sub.end());
    ans[i] = sub;
  }

  return ans;
}

#endif

