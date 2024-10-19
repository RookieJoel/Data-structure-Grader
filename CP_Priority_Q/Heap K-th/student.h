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
  if(k==1) return mData[0];
  auto it = mData;
  it+=k;
  auto ans = std::max_element(it,mData+mSize);
  return *ans;

}

#endif
