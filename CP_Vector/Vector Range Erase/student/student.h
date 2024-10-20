#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include<bits/stdc++.h>

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges) {
  // Write code here
  std::sort(ranges.begin(),ranges.end());
  CP::vector<T> ans;
  std::vector<std::pair<int, int>> overlap;
  int start = ranges[0].first - begin();
  int end = ranges[0].second - begin();
  for(int i = 1;i<ranges.size();i++){
    if(ranges[i].first - begin() <= end){
      end = std::max(end,ranges[i].second - begin());
    }else{
      overlap.push_back({start,end});
      start = ranges[i].first - begin();
      end = ranges[i].second - begin();
    }
  }
  overlap.push_back({start,end});

  // for(auto &x : overlap){
  //   std::cout << "(" << x.first <<"," <<x.second << ") "; 
  // }
  int k = 0;
  for(int i =0;i<mSize;i++){
    if(k < overlap.size() && i >= overlap[k].first && i < overlap[k].second){
      i = overlap[k].second -1;
      k++;
    }else{
      ans.push_back(mData[i]);
    }
  }
  *this = ans;
}

#endif
