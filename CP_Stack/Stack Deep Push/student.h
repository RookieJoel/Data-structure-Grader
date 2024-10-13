#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  CP::stack<T> ans; 
  while(pos--){
    ans.push(top());
    pop();
  }
  push(value);
  while(!ans.empty()){
    push(ans.top());
    ans.pop();
  }
}

#endif
