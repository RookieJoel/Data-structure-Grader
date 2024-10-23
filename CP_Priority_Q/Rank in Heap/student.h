#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<bits/stdc++.h>
using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  int k =0;
  for(int i=0;i<mSize;i++){
    if(mLess(mData[pos],mData[i])) k++;
    //ดูว่ามีกี่ตัวที่มากกว่า mData[pos]
  }
  return k;
}

#endif
