#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if(K > mSize) K = mSize;
  while(K--){
    pop();
  }

}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::stack<T> temp;
  std::stack<T> ans;
  if(K > mSize) K = mSize;
  while(K--){
    temp.push(top());
    pop();
  }
  while(!temp.empty()){
    ans.push(temp.top());
    temp.pop();
  }
  return ans;

}

#endif
