#ifndef __STUDENT_H_
#define __STUDENT_H_

//can include anything
#include<bits/stdc++.h>
template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos,CompareT  comp) {
  // Write code here
  // you can compare two data A and B of type T by calling comp(A,B)
  // which return true when A is less than B
  std::set<int> s;
  for(auto &x : pos){
    int a = x-begin();
    s.insert(a);
  }
  std::vector<T> temp(s.size());
  for(int i = 0,j=0;i<mSize;i++){
    if(s.count(i)){
      temp[j++] = mData[i];
    } 
  }
  std::sort(temp.begin(),temp.end(),comp);
  int e = 0;
  CP::vector<T> ans(mSize);
  for(int i =0;i<mSize;i++){
    if(s.count(i)){
      ans[i] = temp[e++];
    }else{
      ans[i] = mData[i];
    }
  }
  *this = ans;
}

#endif
