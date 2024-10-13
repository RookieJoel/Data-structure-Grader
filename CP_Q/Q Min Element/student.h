#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include<bits/stdc++.h>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  int k=0;
  sort(pos.begin(),pos.end());
  std::set<T> s;
  for(int i =0;i<pos.size();i++){
    if(k<pos.size() && pos[k] >=0 && pos[k] < mSize){
    s.insert(mData[(mFront + pos[k])%mCap]);
    k++;
    }
  }
  auto it = s.begin();
  T min = *it;
  for(auto &x : s){
  if(comp(x,min)) min = x;  
  }

  return min;
}

#endif
