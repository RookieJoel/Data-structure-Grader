#include <list>
#include <iostream>
#include <vector>


using namespace std;

int  checkzuma(list<int> &l,list<int>::iterator &it,int v){
   auto back = it;
   int count = 0;
   while(back!=l.end()&&*back == v){
       count++;
       back--;
   }
   auto itfor = it;
   itfor++;
   while(itfor!=l.end()&&*itfor == v){
       count++;
       itfor++;
   }
   if(count>=3){
         back++;
         it = l.erase(back,itfor);
         return 1;

   }
   return 0;
}

int main() {
  int n,k,v;
  list<int> l;

  cin >> n >> k >> v;
  while(n--) {
    int a;
    cin >> a;
    l.push_back(a);
  }

  auto it = l.begin();
  std::advance(it,k);
   it = l.insert(it,v);

   int c = checkzuma(l,it,v);
   while(c)
   {
        it--;
        if(it != l.end())
             c = checkzuma(l,it,*it);
         else c = 0;
   }

  for (auto &x : l)cout << x << " ";

}

