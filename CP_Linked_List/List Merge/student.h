#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
#include<bits/stdc++.h>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  auto it = ls.begin();
  this->mHeader->prev->next = it.ptr;
  it->prev = this->mHeader->prev->next;
  for(auto it = ls.begin();it!=ls.end();it++){
    it->clear();
  }
}

#endif
