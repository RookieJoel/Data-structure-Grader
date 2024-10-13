#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  // Write code here
  std::vector<std::stack<T>> ans(k);
  std::stack<T> tmp;
    int cond = mSize%k;
    int pos = mSize-1;
    for(int i =0;i<k;i++){
      int tmp_size = mSize/k;

      if(cond != 0){
        tmp_size++;
        cond--;
      }

      for(int j=0;j<tmp_size;j++){
        tmp.push(mData[pos--]);
      }
      while(!tmp.empty()){
        ans[i].push(tmp.top());
        tmp.pop();
      }
    }
    output = ans;
}

#endif
