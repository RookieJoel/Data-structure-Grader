void replace(const T& x, list<T>& y) {
  //write your code here
  CP::list<T> ans;
  auto it = begin();
  while(it!=end()){
    if(*it == x){
      auto i = y.begin(); 
      while(i!=y.end()){
        ans.push_back(*i);
        i++;
      }
    }else{
      ans.push_back(*it);
    }
    it++;
  }
  *this = ans;
}
