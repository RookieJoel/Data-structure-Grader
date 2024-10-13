#include<bits/stdc++.h>

using namespace std;

size_t f,cap,size,last,correction;
bool check(){
    if(f>=cap)return false;
    if(size>cap)return false;
    if(last >= cap)return false;
    if(last != (size+f)%cap)return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> f >> size >> cap >> last >>correction;
        
    }
}