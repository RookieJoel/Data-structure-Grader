#include<bits/stdc++.h>

using namespace std;

bool is_ancestor(int a,int b){
    //a: parent b:child
    while(b>=a){
        b = (b-1)/2;
        if(a==b)return true;
    }
    return false;
}

int main(){
    int n,m;
    cin >> n>> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        if(a==b){
            cout << "a and b are the same node"<<endl;
        }else if(a<b){
            if(is_ancestor(a,b)){
                cout << "a is an ancestor of b"<<endl;
            }else{
                cout << "a and b are not related"<<endl;
            }
        }else{
            if(is_ancestor(b,a)){
                cout << "b is an ancestor of a"<<endl;
            }else{
                cout << "a and b are not related"<<endl;
            }
        }
    }
}