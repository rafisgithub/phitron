#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    long long int u, v, weight;

    Edge(long long int u, long long int v, long long int weight) {
        this->u = u;
        this->v = v;
        this->weight = weight;
    }
};

class Graph {
public:
    long long int n, e;
    vector<Edge> edges;

public:
    Graph(long long int n, long long int e) {
        this->n = n;
        this->e = e;
    }

    void addEdge(long long int u, long long int v, long long int weight) {
        if (u != v) { 
            edges.emplace_back(u, v, weight);
        }
    }

    long long int find(long long int u, vector<int>& parent) {
        if (parent[u] != u) {
            parent[u] = find(parent[u], parent);
        }
        return parent[u];
    }

    void unionSet(long long int u, long long int v, vector<int>& parent, vector<int>& rank) {
        long long int rootU = find(u, parent);
        long long int rootV = find(v, parent);

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

    struct cmp {
        bool operator()(Edge& a, Edge& b) {
            return a.weight < b.weight;
        }
    };

    long long int kruskalMST() {
        sort(edges.begin(), edges.end(), cmp());

        vector<int> parent(n + 1), rank(n + 1, 0);
        for (long long int i = 1; i <= n; ++i) {
            parent[i] = i;
        }

        long long totalCost = 0;
        long long int edgeCount = 0;

        for (const auto& edge : edges) {
            if (find(edge.u, parent) != find(edge.v, parent)) {
                unionSet(edge.u, edge.v, parent, rank);
                totalCost += edge.weight;
                edgeCount++;
            }
        }

        long long int distinctRoots = 0;
        for (long long int i = 1; i <= n; ++i) {
            if (find(i, parent) == i) {
                distinctRoots++;
            }
        }

        return (distinctRoots == 1) ? totalCost : -1; 
    }
};

int main() {
    long long int N, E;
    cin >> N >> E;

    Graph graph(N, E);
    for (long long int i = 0; i < E; ++i) {
        long long int u, v, weight;
        cin >> u >> v >> weight;
        graph.addEdge(u, v, weight);
    }

    cout << graph.kruskalMST() << endl;

    return 0;
}