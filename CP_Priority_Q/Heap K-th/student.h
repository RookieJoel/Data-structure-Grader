#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include<bits/stdc++.h>

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  int idx = 0;
  --k;
  while(k--){
    T temp = mData[idx];
    int c1 = (2*idx)+1;
    int c2 = (2*idx)+2;
    if(mLess(temp,mData[c1])) idx = c1;
    if(mLess(temp,mData[c2])) idx = c2;
  }
  return mData[idx];
}

#endif
