#include<bits/stdc++.h>

using namespace std ;

void next(auto &it,int pos){
    for(int i =0;i<pos;i++) it++;
}

bool check3Streak(list<int> &line,auto &in_pos){
    auto e = line.end();
    auto back = in_pos;
    int count = 0,n = *in_pos;
    //forward from inserted
    while(in_pos!=e){
        if(*in_pos != n) break;
        count++;
        in_pos++;
    }

    //backward from inserted
    while(back!=line.begin()){
        if(*back != n) break;
        count++;
        back--;
    }
    if(count >= 3){
        back++;
        in_pos = line.erase(back,in_pos);
        return true;
    }
    return false;
}

int main(){
    int n,pos,k;
    list<int> line;
    cin >> n >> pos >> k;
    while(n--){
        int x ;
        cin >> x;
        line.push_back(x);
    }
    auto it = line.begin();
    next(it,pos);
    auto in_pos = line.insert(it,k);
    bool check = check3Streak(line,in_pos);
    while(check){
        in_pos--;
        if(in_pos == line.end()) break;
        check = check3Streak(line,in_pos);
    }
    for(auto &x : line) cout << x << " ";
}