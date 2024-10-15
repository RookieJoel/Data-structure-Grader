// #include<bits/stdc++.h>

// using namespace std; 

// int main(){
//     int n,m;
//     set<int> ans,select;
//     vector<int> temp;
//     cin >> n >> m;
//     if(m==0) cout << 0;
//     else{
//         int c = floor(log2(n));
//         int counter = ++c;
//         int k = 0,sum = 0;
//         while(counter--){
//             sum+=pow(2,k);
//             temp.push_back(sum-1);
//             k++;
//         }
//         auto it = lower_bound(temp.begin(),temp.end(),m);
//         if(it == temp.end()-1){
//             int x = min(n-1,temp[temp.size()-1]);
//             cout << x << endl;
//             for(int i =0;i<x+1;i++){
//                 if(i != m) cout << i << " ";
//             }
//         }
//         else{
//             cout << *it <<endl;
//             for(int i = 0;i<*it+1;i++){
//                 if(i != m) cout << i << " ";
//             }
//         }

//     }
// }

#include <iostream>
#include <vector>

using namespace std;

bool is_child(int parent, int child) {
    while (child >= parent) {
        if (child == parent) return true;
        child = (child - 1) / 2;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (is_child(m, i)) {
            continue;
        }
        ans.push_back(i);
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
