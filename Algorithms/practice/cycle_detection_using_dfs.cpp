#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;

bool vis[N];
vector<int> adj[N];
int parentArray[N];

bool ans;

void dfs(int s) {
    vis[s] = true;

    // cout << s << " ";

    for(int child : adj[s]) {

        if(vis[child] == true && parentArray[s] != child){
            ans = true;
            cout << child << endl;
        }
        if(vis[child] == false) {
            parentArray[child] = s;
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
    memset(parentArray,-1,sizeof(parentArray));
    ans = false;
    for (int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(ans) {
        cout <<"Cycle found\n";
    }else {
        cout <<"Cycle not found\n";
    }

    return 0;
}