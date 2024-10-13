#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here
	if(first > last) return;
	if(first < 0) first = 0;
	if(last > mSize ) last = mSize-1;
	int k = (last - first + 1)/2;
	int x = mSize - 1;
	for(int i=0;i<k;i++){
		using std::swap;
		swap(mData[x-first],mData[x-last]);
		first++;
		last--;
	}

}

#endif
