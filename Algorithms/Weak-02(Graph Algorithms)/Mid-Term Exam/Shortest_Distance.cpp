#include <bits/stdc++.h>
using namespace std;

const long long infinity = LLONG_MAX;

vector<vector<pair<int, long long>>> adj;

vector<long long> dijkstra(int source, int n) {
    vector<long long> dist(n + 1, infinity);
    dist[source] = 0;

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        long long currDist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (currDist > dist[node]) continue;

        for (auto edge : adj[node]) {
            int nextNode = edge.first;
            long long weight = edge.second;

            if (dist[node] + weight < dist[nextNode]) {
                dist[nextNode] = dist[node] + weight;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }

    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);

    for (int i = 0; i < m; ++i) {
        int u, v;
        long long cost;
        cin >> u >> v >> cost;
        adj[u].push_back({v, cost});
    }

    int q;
    cin >> q;

    while (q--) {
        int src, dest;
        cin >> src >> dest;

        vector<long long> dist = dijkstra(src, n);

        if (dist[dest] == infinity) {
            cout << -1 << endl;
        } else {
            cout << dist[dest] << endl;
        }
    }

    return 0;
}
