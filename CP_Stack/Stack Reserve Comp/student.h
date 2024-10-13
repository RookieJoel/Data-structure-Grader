    #ifndef __STUDENT_H_
    #define __STUDENT_H_
    #include<bits/stdc++.h>
    template <typename T>
    int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
        //write your code here
        int re_a,re_b;
        re_a = mCap - mSize;
        re_b = other.mCap - other.size();
        if(re_a == re_b)return 0;
        if(re_a < re_b)return -1;
        return 1;
    }

    #endif
