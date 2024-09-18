#include <bits/stdc++.h>

using namespace std;

const int N = 100;
vector<int> v[N];
bool vis[N];

void dfs(int s)
{
    cout << s <<endl;

    vis[s] = true;

    for(int child : v[s]){
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
        v[a].push_back(b);
        v[b].push_back(a);

    }
    int s;
    cin>>s;
    memset(vis,false,sizeof(vis));

    dfs(s);
    return 0;
}