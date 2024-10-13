#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  if(k>=mSize) k = mSize;
  if(m >= s2.size()) m = s2.size();
  CP::stack<T> temp_s2,temp_this;
  while(m--){
    temp_s2.push(s2.top());
    s2.pop();
  }
  while(k--){
    temp_this.push(top());
    pop();
  }
  while(!temp_s2.empty()){
    push(temp_s2.top());
    temp_s2.pop();
  }
  while(!temp_this.empty()){
    push(temp_this.top());
    temp_this.pop();
  }
}
#endif
