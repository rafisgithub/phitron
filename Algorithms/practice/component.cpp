#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;

vector<int> adj[N];
bool vis[N];

void dfs(int src) {
    // cout << src <<" ";

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


    memset(vis,false,sizeof(vis));
    int c = 0;
    for(int i=0;i<n;i++) {
        if(vis[i]==false){
            dfs(i);
            c++;
        }
    }

    cout <<"component : "<<c<<endl;
    return 0;
}