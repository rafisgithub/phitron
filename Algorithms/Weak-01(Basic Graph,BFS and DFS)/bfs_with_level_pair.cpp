#include <bits/stdc++.h>

using namespace std;

vector<int> mat[1005];

bool is_visited[1005];

int level[1005];


void bfs(int src, int des)
{
    queue<pair<int,int>> q;

    q.push({src,0});
    is_visited[src] = true;

    bool paisi = false;

    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        // cout << f << " ";
        if(par == des){
            cout << level <<endl;
            paisi = true;
        }
        for(int child : mat[par]){
            if(is_visited[child] == false){
                q.push({child,level+1});
                is_visited[child] = true;
            }
        }
    }

    if(paisi==false){
        cout <<"-1";
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

    bfs(src,4);




    return 0;
}