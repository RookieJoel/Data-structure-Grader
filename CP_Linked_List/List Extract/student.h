#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  auto it_first = iterator(output.mHeader->next);
  // std::cout << *it_first;
  while(a!=b){
    if(*a == value) {
      auto next_a = a;
      next_a++;
      a.ptr->prev->next = a.ptr->next;
      a.ptr->next->prev = a.ptr->prev;
      mSize--;

      output.mHeader->next = a.ptr;
      a.ptr->prev = output.mHeader;
      a.ptr->next = it_first.ptr;
      it_first.ptr->prev = a.ptr;
      it_first = a;
      output.mSize++;

      a = next_a;
    }
    else a++;
  }


}

#endif
