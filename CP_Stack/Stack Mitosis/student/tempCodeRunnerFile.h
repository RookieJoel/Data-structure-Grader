#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include<bits/stdc++.h>

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    CP::stack<T> temp;
    CP::stack<T> ans;
    T tmp_data;
    int k=0;
    while(!empty()){
        tmp_data = top();
        temp.push(top());
        if(k>=a && k <= b){
            temp.push(tmp_data);
        }
        pop();
        k++;
    }  

    while(!temp.empty()){
        ans.push(temp.top());
        temp.pop();
    }

    *this = ans;
}

#endif