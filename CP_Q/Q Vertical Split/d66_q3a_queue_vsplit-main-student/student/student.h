#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  // your code here
  std::vector<std::queue<T>> ans(k);
  int cond = mSize%k;
  int x = 0;
  for(int i =0;i<k;i++){
    int temp_size = mSize/k;

    if(cond != 0){
      temp_size++;
      cond--;
    }

    for(int j=0;j<temp_size;j++){
      ans[i].push(mData[(mFront+x)%mCap]);
      x++;
    }
  }
  output = ans;
}

#endif
