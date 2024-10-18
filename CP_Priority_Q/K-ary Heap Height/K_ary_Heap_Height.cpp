#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,k;
    cin>> n >> k;
    long long ans = (log((n)*(k-1))/log(k));
    cout << ans;
}