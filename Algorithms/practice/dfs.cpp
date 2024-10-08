#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;

vector<int> adj[N];
bool vis[N];

void dfs(int src) {
    cout << src <<" ";

    vis[src] = true;

    for(int child : adj[src]) {
        if(vis[child] == false){
            dfs(child);
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


    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    dfs(src);
    return 0;
}