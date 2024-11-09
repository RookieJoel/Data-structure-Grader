#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if(it == end()) return result;
  
  auto temp = it.ptr->prev;
  //add result
  result.mHeader->next = it.ptr;
  it.ptr ->prev = result.mHeader;

  auto e = iterator(mHeader->prev);
  result.mHeader->prev = e.ptr;
  e.ptr->next = result.mHeader;
  result.mSize+=(mSize-pos);
  //fix this 
  mHeader->prev = temp;
  temp->next = mHeader;
  mSize=pos;
  return result;
}

#endif
