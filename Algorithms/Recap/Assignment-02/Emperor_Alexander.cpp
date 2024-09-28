#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int u, v, weight;
    Edge(int u, int v, int weight) {
        this->u = u;
        this->v = v;
        this->weight = weight;
    }
};

struct cmp {
    bool operator()(Edge& a, Edge& b) {
        return a.weight < b.weight;
    }
};

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
    int N, E;
    cin >> N >> E;

    vector<Edge> edges;
    edges.reserve(E);
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.emplace_back(u, v, w);
    }

    sort(edges.begin(), edges.end(), cmp());

    vector<int> parent(N + 1);
    vector<int> rank(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        parent[i] = i;
    }

    long long totalCost = 0;
    int edgesUsed = 0;

    for (auto edge : edges) {
        if (find(edge.u, parent) != find(edge.v, parent)) {
            unionSet(edge.u, edge.v, parent, rank);
            totalCost += edge.weight;
            edgesUsed++;
        }
    }

    set<int> uniqueRoots;
    for (int i = 1; i <= N; ++i) {
        uniqueRoots.insert(find(i, parent));
    }

    if (uniqueRoots.size() > 1) {
        cout << "Not Possible" << endl; 
    } else {
        cout << (E - edgesUsed) << " " << totalCost << endl; 
    }

    return 0;
}
