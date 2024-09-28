#include <bits/stdc++.h>
using namespace std;

int find(int u, vector<int>& parent) {
    if (parent[u] != u) {
        parent[u] = find(parent[u], parent);
    }
    return parent[u];
}

void unionSet(int u, int v, vector<int>& parent, vector<int>& rank) {
    int rootU = find(u, parent);
    int rootV = find(v, parent);

    if (rootU != rootV) {
        if (rank[rootU] < rank[rootV]) {
            parent[rootU] = rootV;
        } else if (rank[rootU] > rank[rootV]) {
            parent[rootV] = rootU;
        } else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<int> parent(n + 1), rank(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        parent[i] = i;
    }

    int cycleEdges = 0;

    for (int i = 0; i < e; ++i) {
        int u, v;
        cin >> u >> v;

        if (find(u, parent) == find(v, parent)) {
            cycleEdges++;
        } else {
            unionSet(u, v, parent, rank);
        }
    }

    cout << cycleEdges << endl;

    return 0;
}
