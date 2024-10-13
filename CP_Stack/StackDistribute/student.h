#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> ans(k);
  int n = mSize%k;
  int pos = mSize-1;
  for(int i = 0;i<k;i++){
    int tmp_size = mSize/k;
    if(n != 0){
      tmp_size++;
      n--;
    }
    for(int j=0;j<tmp_size;j++){
      ans[i].push_back(mData[pos--]);
    }

  }

  return ans;
}
#endif
