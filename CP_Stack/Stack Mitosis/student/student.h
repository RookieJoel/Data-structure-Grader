#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include<bits/stdc++.h>

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    CP::stack<T> temp;
    T tmp_data;
    int k=0;
    for(int i = mSize -1;i>=0;i--){
        tmp_data = mData[i];
        mData[i] = tmp_data;
        if(k>=a && k<=b){
            mData[++i] = tmp_data;
            i+=1;
        }
        k++;
    }

}

#endif