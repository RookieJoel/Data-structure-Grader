#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include<bits/stdc++.h>
using namespace std;

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  CP::vector<T> ans;
  std::map<T,bool> m;
  for(int i =0;i<mSize;i++){
    T x = mData[i];
    if(!m[x]){
      ans.push_back(x);
      m[x] = true;
    }
  }

  *this = ans;
}

#endif
