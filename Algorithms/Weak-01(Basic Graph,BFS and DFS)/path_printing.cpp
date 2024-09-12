#include <bits/stdc++.h>

using namespace std;

vector<int> mat[1005];

bool is_visited[1005];

int level[1005];

int parent[1005];

void bfs(int src)
{
    queue<int> q;

    q.push(src);
    is_visited[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int par = q.front();
        q.pop();

        // cout << f << " ";

        for(int child : mat[par]){
            if(is_visited[child] == false){
                q.push(child);
                is_visited[child] = true;
                level[child] = level[par]+1;
                parent[child] = par; 

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

        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int src,des;
    cin>>src>>des;

    memset(is_visited,false,sizeof(is_visited));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));

    bfs(src);
    int x = des;
    vector<int> path;
    while(x != -1)
    {
        // cout << x << " ";
        path.push_back(x);
        x = parent[x];
    }

    reverse(path.begin(),path.end());

    for(int val : path)
    {
        cout << val <<endl;
    }
     



    return 0;
}