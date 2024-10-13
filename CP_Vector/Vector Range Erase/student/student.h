#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include<bits/stdc++.h>

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
  // Write code here
  CP::vector<T> ans;
  std::vector<std::pair<int,int>> v;
  for(auto &x : ranges){
    int a = x.first - begin();
    int b = x.second - begin();
    v.push_back({a,b});
  }

  std::sort(v.begin(),v.end());
    // for(auto &x : v) std::cout<< x.first << "," << x.second <<" ";

  int p =0,j=0;
  for(int i = 0;i<mSize;i++){
    if(p< v.size() && i>=v[p].first && i < v[p].second){
      if(i == v[p].second - 1) {
        int temp = v[p].second;
        while(v[p].first < temp){
          p++;
        }
      }
    }else{
      ans.push_back(mData[i]);
    }
  }

  *this = ans;
}

#endif
