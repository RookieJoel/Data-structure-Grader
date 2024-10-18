#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include<bits/stdc++.h>

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  // for(int i =0;i<mSize;i++){
  //   std::cout << mData[i] << " ";
  // }
  if(k==0){
    r.push_back(mData[0]);
    return r;
  }
  size_t count = k;
  long long  sum = 0,c=0;
  while(count--){
    sum+=pow(2,c);
    c++;
  }
  long long a = pow(2,k);
  // std::cout << sum << " " << a ;
  for(int i = sum;i<sum+a;i++){
    if(i >= mSize) break;
    r.push_back(mData[i]);
  }
  sort(r.begin(),r.end(),std::greater<T>());
  return r;
}

#endif

