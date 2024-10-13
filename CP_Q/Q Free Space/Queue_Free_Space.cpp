#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long k,cap=1,size=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        if(m == 0){
            cin >> k;
            size+=k;
        }else{
            cin >> k;
            size-=k;
        }
        while(cap < size){
            cap*=2;
        }
    }

    cout << cap - size;
}