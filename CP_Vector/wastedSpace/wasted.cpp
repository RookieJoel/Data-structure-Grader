#include<bits/stdc++.h>

using namespace std;

int main(){
    long long m;
    int n;
    cin >> n;
    int cap = 1,mSize = n;
    while(cap < mSize){
        cap*=2;
    }
    cout << cap - mSize;
}