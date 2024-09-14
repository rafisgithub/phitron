#include <bits/stdc++.h>
using namespace std;

const long long infinity = 1e18;

class Edge {
public:
    int u, v;
    long long w;
    Edge(int u, int v, long long w) : u(u), v(v), w(w) {}
};

bool bellman_ford(int N, vector<Edge>& edges, int S, vector<long long>& dist) {
    dist[S] = 0;  
    
    for (int i = 0; i < N - 1; i++) {
        bool relaxed = false;
        for (auto edge : edges) {
            if (dist[edge.u] != infinity && dist[edge.u] + edge.w < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
                relaxed = true;
            }
        }
        if (!relaxed) break;
    }
    
    for (auto edge : edges) {
        if (dist[edge.u] != infinity && dist[edge.u] + edge.w < dist[edge.v]) {
            return false;  
        }
    }
    
    return true; 
}

int main() {
    int N, E;
    cin >> N >> E;

    vector<Edge> edges; 
  
    for (int i = 0; i < E; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int S;
    cin >> S;
    vector<long long> dist(N + 1, infinity);  

    if (!bellman_ford(N, edges, S, dist)) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int D;
        cin >> D;

        if (dist[D] == infinity) {
            cout << "Not Possible" << endl;
        } else {
            cout << dist[D] << endl;
        }
    }

    return 0;
}
