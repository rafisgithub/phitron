#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector<int> arr[N];
bool vis[N];

void dfs(int s){
    cout << s << " ";

    vis[s] = true;

    for(int child : arr[s]){
        if(vis[child] == false){
            dfs(child);
        }
    }

}
int main(){
    int n,e;
    cin>>n>>e;

    while(e--) {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);

    }

    int s;
    cin>>s;
    memset(vis,false,sizeof(vis));

    dfs(s);
    return 0;
}