#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"
#include<bits/stdc++.h>
template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  // your code here
  CP::queue<T> ans;
  std::sort(pos.begin(),pos.end());
  int k = 0;
  for(int i =0;i<mSize;i++){
    if(k<pos.size() && i==pos[k]) k++;
    else ans.push(mData[mFront+i]%mCap);
  }
  *this = ans;
}

#endif
