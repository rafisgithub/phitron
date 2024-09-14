#include <bits/stdc++.h>

using namespace std;
const int N = 100;
vector<pair<int, int>> v[N];
int dis[N];

// Comparator class to prioritize the node with the smallest cost
class cmp {
public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;  // Min-heap based on second element (cost)
    }
};

void dijkstra(int src) {
    // Priority queue (min-heap) with custom comparator
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    
    dis[src] = 0;

    while (!pq.empty()) {
        pair<int, int> parent = pq.top();
        pq.pop();

        int node = parent.first;
        int cost = parent.second;

        // Check all adjacent nodes (neighbors)
        for (pair<int, int> child : v[node]) {
            int childNode = child.first;
            int childCost = child.second;

            // Relaxation step
            if (cost + childCost < dis[childNode]) {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    // Initialize distances to infinity
    for (int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }

    dijkstra(0);  // Run Dijkstra's algorithm from source node 0
    
    // Output distances from the source
    for (int i = 0; i < n; i++) {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}
