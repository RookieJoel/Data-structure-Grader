#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>
#include<bits/stdc++.h>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    if(k.size() == 0) return {};
    std::vector<std::pair<T,size_t>> ans(k.size());
    std::map<T,size_t> m;
    std::set<T> s;
    for(auto &x : k){
        s.insert(x);
    }
    
    for(int i =0;i<mSize;i++){
        if(s.count(mData[i])){
            m[mData[i]]+=1;
        }
    }
    for(int i =0;i<k.size();i++){
        ans[i] = {k[i],m[k[i]]};
    }

    return ans;
}

#endif
