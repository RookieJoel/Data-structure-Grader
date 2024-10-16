#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<bits/stdc++.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if(mSize != other.size()) return false;
  CP::priority_queue<T,Comp> temp = *this;
  CP::priority_queue<T,Comp> temp_other = other;
  while(!temp.empty()){
    if(temp.top() != temp_other.top()) return false;
    temp.pop();
    temp_other.pop();
  }
  return true; // you can change this line
}

#endif
