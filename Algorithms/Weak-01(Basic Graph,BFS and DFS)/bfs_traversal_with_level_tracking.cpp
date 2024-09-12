#include <bits/stdc++.h>

using namespace std;

vector<int> mat[1005];

bool is_visited[1005];

int level[1005];


void bfs(int src)
{
    queue<int> q;

    q.push(src);
    is_visited[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int f = q.front();
        q.pop();

        // cout << f << " ";

        for(int x : mat[f]){
            if(is_visited[x] == false){
                q.push(x);
                is_visited[x] = true;
                level[x] = level[f]+1;
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

    int src;
    cin>>src;

    memset(is_visited,false,sizeof(is_visited));
    memset(level,-1,sizeof(level));

    bfs(src);


    for(int i=0;i<n;i++){
        cout <<i<<" : "<< level[i]<<endl;
    }


    return 0;
}