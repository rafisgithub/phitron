#include <bits/stdc++.h>

using namespace std;

typedef pair<long long, int> pii;
const long long infinity = 1e18;

void dijkstra(int src, int N, vector<vector<pii>>&adj, vector<long long>&dist) {
    priority_queue<pii, vector<pii>, greater<pii>> pq; 

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        pii current = pq.top(); 
        pq.pop();
        long long cost = current.first;
        int node = current.second;

        if (cost > dist[node]) continue;

        for (auto edge : adj[node]) {
            long long next_cost = edge.first;
            int neighbor = edge.second;

            long long new_cost = cost + next_cost;
            if (new_cost < dist[neighbor]) {
                dist[neighbor] = new_cost;
                pq.push({new_cost, neighbor});
            }
        }
    }
}

int main() {
    int N, E;
    cin >> N >> E;
    vector<vector<pii>> adj(N + 1);
    for (int i = 0; i < E; i++) {
        int A, B;
        long long W;
        cin >> A >> B >> W;
        adj[A].push_back({W, B});
    }

    int S;
    cin >> S;
    vector<long long> dist(N + 1, infinity);
    dijkstra(S, N, adj, dist);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int D;
        long long DW;
        cin >> D >> DW;
        if (dist[D] <= DW) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
