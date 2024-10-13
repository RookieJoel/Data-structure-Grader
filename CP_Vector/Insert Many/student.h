#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<bits/stdtr1c++.h>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  CP::vector<T> ans;
  std::map<int,T> m(data.begin(),data.end());
  for(int i=0;i<mSize;i++){
    if(m.count(i)){
      ans.push_back(m.find(i)->second);
    }
    ans.push_back(mData[i]);
  }
  
  if(m.count(mSize)){
    ans.push_back(m.find(mSize)->second);
  }
  
  *this = ans;
}

#endif
