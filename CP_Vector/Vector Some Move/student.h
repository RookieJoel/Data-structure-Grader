#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
    int i = std::upper_bound(aux.begin(), aux.end(), index) - aux.begin();
    if (i > 0) {
        index -= aux[i - 1];
    }
    auto &target = mData[i].begin();
    insert(target+index,value.begin(),value.end());
    mSize+=value.size();
    mCap = mSize;
} 

#endif