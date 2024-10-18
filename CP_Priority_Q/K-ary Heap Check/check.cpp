#include<bits/stdc++.h>

using namespace std;

bool check(vector<int> v,int a,int k){
    int p = (a-1)/k;
    if(v[p] < v[a]) return false;
    return true;
}

int main(){
std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int m,k;
    cin >> m;
    while(m--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        bool ch = false;
        if(v.size() == 1) cout << "true"<<endl;
        else{
            for(int i=1;i<v.size();i++){
                // cout << check(v,i,k) << " check of :" << i <<endl;
                if(!check(v,i,k)) {
                    cout << "false"<<endl;
                    ch = true;
                    break;
                }
            }
            if(!ch) cout << "true"<<endl;
    }
}
}