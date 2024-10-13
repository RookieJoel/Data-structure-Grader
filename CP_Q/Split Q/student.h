#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T> > qs(k);
    while(!empty()){
        // std::cout << mFront <<'\n';
        // std::cout << "this is index " << i << " which val = " << mData[(mFront+i)%mCap] <<"\n";
        if(mSize <=0) qs[mFront%k].push({});
        qs[mFront%k].push(mData[(mFront)%mCap]);
        pop();
    }
    return qs;
}

#endif

