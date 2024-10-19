#include<bits/stdc++.h>

using namespace std;

void descendant(int a,set<int> &s,int vertex){
    int c1 = (2*a)+1;
    int c2 = (2*a)+2;
    if(c1 < vertex){
        s.insert(c1);
        descendant(c1,s,vertex);}
    if(c2 < vertex){
        s.insert(c2);
        descendant(c2,s,vertex);}
}

int main(){
    int n,a;
    cin >> n >> a;
    set<int> s;
    s.insert(a);
    descendant(a,s,n);
    cout << s.size()<<endl;
    for(auto &x : s){
        cout << x << " ";
    }
}