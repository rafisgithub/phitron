#include <bits/stdc++.h>
using namespace std;

class DSU {

    public:
    vector<int> parent;
    vector<int> rank;
    
    DSU(int n) {
        parent.resize(n+1);
        rank.resize(n+1, 0);
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    bool unionSets(int x, int y) {

        int rootX = find(x);

        int rootY = find(y);

        if (rootX == rootY) {
            return false;
        }
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    DSU dsu(n);
    int cycleEdges = 0;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        if (dsu.find(u) == dsu.find(v)) {
            cycleEdges++;
        } else {
            dsu.unionSets(u, v);
        }
    }
    cout << cycleEdges << endl;
    return 0;
}