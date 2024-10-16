#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
int CheckHeight(long long S,long long a){
    int h = 0;
    while(a > 0){
        a = (a-1)/S;
        h++;
    }
    return h;
}
int relation(long long S, long long a, long long b) {
    if(a>b) swap(a,b);
    if((b-1)/S == a) return 1;
    long long k = b;
    while(k>a){
        k = (k-1)/S;
        if(k==a)return 2;
    }

    if(CheckHeight(S,a) != CheckHeight(S,b)) return 3;
    if(CheckHeight(S,a) == CheckHeight(S,b)) return 4;
    
}
int main() {
ios_base::sync_with_stdio(false); cin.tie(0);
int n;
long long S,a,b;
cin >> n;
while (n--) {
cin >> S >> a >> b;
cout << relation(S,a,b) << " ";
}
cout << endl;
}