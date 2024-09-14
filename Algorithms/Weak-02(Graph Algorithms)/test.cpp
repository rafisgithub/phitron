#include <bits/stdc++.h>

using namespace std;

void bfs(int src)
{
    queue<int> q;
    q.push(src);

    vis[src] = true;

    while(!q.empty())
    {
        int f = q.front();

        q.pop();

        cout << f <<" ";
    }

    for(int child : v[f]){
        if(vis[child] == false){
            q.push(child);
            vis[child] = true;
        }
    }
}

    vector<int> v[1005];
 bool vis[1005];
int main(){
    int n,e;

    cin>>n>>e;


 
    memset(vis,0,sizeof(vis));

    while(e--)
    {
        int a,b;
        cin>>a>>b;

        v[a].push_back(a);
        v[b].push_back(b);
    }

    int src;
    cin>>src;

    bfs(src);
    return 0;
}