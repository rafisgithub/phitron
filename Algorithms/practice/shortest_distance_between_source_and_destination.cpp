#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool vis[N];
int parent[N];

void find_distance(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    
    while(!q.empty()) {
        int node = q.front();
        q.pop();

        for(int child : adj[node]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = true;
                parent[child] = node;
            }
        }
    }
}

int main() {

    int n, e;
    cin >> n >> e;

    while(e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;
    cin >> q;
    while(q--) {
        int src, des;
        cin >> src >> des;
        memset(vis, false, sizeof(vis));
        memset(parent, -1, sizeof(parent));
        


        find_distance(src);

        int x = des;
        int counter = 0;
        while(x != src) {
            counter++;
            x = parent[x];
        }

        if(x == src) {
            cout << counter << endl;
        } else {
            cout << "-1" << endl;  
        }
    }

    return 0;
}
