#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
bool vis[N];
bool ans;
vector<int> adj[N];
int parent_arr[N];

void dfs(int parent){

    vis[parent] = true;
    // cout << parent << endl;
    for(int child : adj[parent]){
        if(vis[child] && child!=parent_arr[parent]){
            ans  = true;
        }
        if(vis[child] == false){
            dfs(child);
            parent_arr[child] = parent;
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;

    while(e--)
    {
        int a,b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    memset(vis,false,sizeof(vis));
    memset(parent_arr,-1,sizeof(parent_arr));
    ans = false;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(ans){
        cout << "Cycle found\n";
    }else{
        cout <<" NOT found\n";
    }
    return 0;
}