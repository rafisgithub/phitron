#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool vis[N];
int level[N];

void print_all_node_given_level(int src) {

    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty()) {
        int par = q.front();
        q.pop();

        for(int child : adj[par]) {
            if(vis[child] == false) {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }
}
int main() {

    int n,e;
    cin>>n>>e;
    
    while(e--) {
        int a,b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int l;
    cin>>l;
    memset(vis,false,sizeof(vis));

    print_all_node_given_level(0);

    vector<int> nodes;
    for(int i=0;i<n;i++){
        if(level[i] == l){
            nodes.push_back(i);
        }
    }
    reverse(nodes.begin(),nodes.end());

    for(int node : nodes){
        cout << node <<" ";
    }
    return 0;
}