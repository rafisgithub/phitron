#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;

vector<int> mat[N];

bool vis[N];

void dfs(int src)
{
    cout << src << endl;
    vis[src] = true;

    // for(int i=0;i<mat[src].size();i++){
        
    //     int child = mat[src][i];
    // }

    for(int child : mat[src]){
        if(vis[child] == false){
            dfs(child);
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

    memset(vis,false,sizeof(vis));
    int src;
    cin >> src;

    dfs(src);

    return 0;
}