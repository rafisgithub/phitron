#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
bool vis[N];
bool ans;
vector<int> adj[N];
int parent_arr[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while(!q.empty())
    {

        int parent = q.front();
        q.pop();
        // cout << parent<<" ";

        for(int child: adj[parent]){
            if(vis[child] && parent_arr[parent]!=child){
                ans = true;
            }
            if(!vis[child]){
                vis[child] = true;
                parent_arr[child] = parent;
                q.push(child);

            }
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
            bfs(i);
        }
    }

    if(ans){
        cout << "Cycle fond\n";
    }else{
        cout <<" NOT found\n";
    }
    return 0;
}