#include <vector>
#include<bits/stdc++.h>
using namespace std;


template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    std::vector<T> ans(A);
    std::unordered_set<T> s(A.begin(),A.end());
    for(int i =0;i<B.size();i++){
        if(!s.count(B[i])) ans.push_back(B[i]);
    }

    return ans;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    std::vector<T> ans;
    std::unordered_set<T> s(B.begin(),B.end());
    for(int i=0;i<A.size();i++){
        if(s.count(A[i])) ans.push_back(A[i]);
    }
    return ans;
}
