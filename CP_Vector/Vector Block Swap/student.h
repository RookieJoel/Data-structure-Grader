#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  int posA = a - begin();
  int posB = b - begin();
  if(posA < 0 || posA > mSize) return false;
  if(posB < 0 || posB > mSize) return false;
  if(posA+m-1 < 0 || posA+m-1 > mSize-1) return false;
  if(posB+m-1 < 0 || posB+m-1 > mSize-1) return false;
  if(m < 0) return false;
  if(posA > posB){
    return posA+m-1 > posB+m-1;
  }
  if(posA < posB){
    return posA+m-1 < posB+m-1;
  }else{
    for (int i = 0; i < m; i++) {
        T temp = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = temp;
    }
    return true;
  }

  
}

#endif
