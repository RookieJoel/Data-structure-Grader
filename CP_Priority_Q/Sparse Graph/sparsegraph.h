#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include<bits/stdc++.h>

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        vertex = 3;
        edges = vector<set<int>>(vertex);
    }

    SparseGraph(int n_in) {
        // Your code here
        vertex = n_in;
        edges = vector<set<int>>(vertex);
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        vertex = G.vertex;
        edges = G.edges;

    }

    void AddEdge(int a, int b) {
        // Your code here
        edges[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edges[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return edges[a].count(b);
    }

    SparseGraph Transpose() const {
        // Your code here
       SparseGraph temp(vertex);
		for (int i = 0; i < edges.size(); i++) {
			for (const auto& x : edges[i]) {
				temp.AddEdge(x, i);
			}
		}
		return temp;
    }



protected:
    // Your code here
    int vertex; //เก็บจำนวน nodes 
    vector<set<int>> edges; //เก็บเส้นเชื่อม
   
};
#endif // __SPARSE_GRAPH_H__

