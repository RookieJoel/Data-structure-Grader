#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include <math.h>

template <typename T, typename Comp>
T CP::priority_queue<T, Comp>::get_kth(size_t k) const
{
  // write your code here
  // can include anything
  size_t vSize = std::min(mSize, size_t(pow(2,k)-1));
  std::vector<T> tmp(vSize);
  for (size_t i = 0; i < vSize; i++)
    tmp[i] = mData[i];
  sort(tmp.rbegin(), tmp.rend(),mLess);
  return tmp[k-1];

}

#endif

