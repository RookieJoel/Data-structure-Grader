#include "stack.h"
#include "queue.h"
#include<bits/stdc++.h>
namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T *arr = new T[this->mSize+s.size()]();
        for(int i =0;i<s.size();i++){
            arr[i] = s.mData[i];
        }
        int k = 0;
        for(int i = s.size();i<this->mSize+s.size();i++){
            arr[i] = this->mData[k++];
        }

        delete [] mData;
        this->mData = arr;
        this->mSize+=s.size();
        mCap = mSize;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T *arr = new T[mSize + q.size()]();
        int k = q.size() - 1;
        for(int i = 0;i<q.size();i++){
            arr[i] = q.mData[(q.mFront + k)%q.mCap];
            k--;
        }
        int j=0;
        for(int i = q.size();i<mSize + q.size();i++){
            arr[i] = mData[j++];
        }

        delete [] mData;
        mData = arr;
        mSize+=q.size();
        mCap = mSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        queue<T> ans = *this;
        for(int i = s.size()-1;i>=0;i--){
            ans.push(s.mData[i]);
        }
        *this = ans;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        queue<T> ans = *this;
        for(int i=0;i<q.size();i++){
            ans.push(q.mData[(q.mFront + i)%q.mCap]);
        }
        *this = ans;
    }
}
