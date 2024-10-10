#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
bool vis[N];
vector<int> adj[N];
bool pathVisi[N];
bool ans;

void dfs(int parent) {
    vis[parent] = true;

    pathVisi[parent] = true;

    for(int child : adj[parent]) {

        if(pathVisi[child]) {
            ans = true;
        }
        if(vis[child]==false){
            dfs(child);
        }
    }
    pathVisi[parent] = false;
    
}
int main() {
    int n,e;
    cin>>n>>e;

    while(e--) {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        // adj[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    memset(pathVisi,false,sizeof(pathVisi));

    ans = false;

    for (int i = 0; i < n; i++)
    {
        if(vis[i] == false) {
            dfs(i);
        }
    }
    
    if(ans){
        cout <<"Cycle detected\n";
    }else {
        cout <<"Not\n";
    }

    return 0;
}