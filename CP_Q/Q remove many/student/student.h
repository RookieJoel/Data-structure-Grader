#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  // your code here
  T *arr = new T[mSize-pos.size()]();
  int k = 0,j=0;
  for(int i=0;i<mSize;i++){
    if(!pos.empty() && i == pos[k]){
      k++;
    }else{
      arr[j] = mData[i];
    }
  }

  delete [] mData;
  mData = arr;
  mSize-=pos.size();

}

#endif
