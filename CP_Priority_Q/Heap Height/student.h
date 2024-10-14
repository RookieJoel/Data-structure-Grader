#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<bits/stdc++.h>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if(mSize <=0) return -1;
  if(mSize == 1) return 0;
  int count = 1;
  while(true){
    if(pow(2,count) <= mSize && mSize < pow(2,count+1)) return count;
    count++;
  }

}

#endif

