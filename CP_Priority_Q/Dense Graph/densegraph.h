#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
#include<bits/stdc++.h>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n = 3;
        e = vector<set<int>>(n);
    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
        e = vector<set<int>>(n);
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n = G.n;
        e = G.e;
    }

    void AddEdge(int a, int b) {
        // Your code here
        e[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        e[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return e[a].count(b);
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph ans(n);
        for(int i=0;i<e.size();i++){
            for(auto &x : e[i]){
                ans.AddEdge(x,i);
            }
        }
        return ans;
    }

protected:
    int n;
    // Your code here
    vector<set<int>> e;
};
#endif // __DENSE_GRAPH_H__
