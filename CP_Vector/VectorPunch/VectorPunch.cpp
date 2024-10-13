#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
//write some code here
//don’t forget to return something
    int pos = it - v.begin();
    int start = pos - k, last = pos+k;
    if(pos<0) pos = 0;
    if(last>v.size()) last = v.size();
    vector<string> ans;
    for(int i = 0;i<v.size();i++){
        if(!(i>=start && i<=last)){
            ans.push_back(v[i]);
        }
    }

    return ans;
}
int main() {
int n,j,k;
cin >> n >> j >> k;
vector<string> v(n);
for (int i = 0;i < n;i++) {
cin >> v[i];
}
cout << "Result after punch" << endl;
vector<string> result = punch(v, v.begin() + j, k);
for (auto &x : result) {
cout << x << endl;
}
}