#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<bits/stdc++.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for(int i =0;i<mSize;i++){
    if(mData[i] == k) return true;
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  if(!find(k)) return -1;
  int idx;
  for(int i =0;i<mSize;i++){
    if(mData[i] == k) idx = i;
  }
  std::cout << idx;
  int h=0;
  while(idx > 0){
    h++;
    idx = (idx-1)/2;
  }
  return h;
}

#endif

