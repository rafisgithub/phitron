#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
vector<int> arr[N];

bool vis[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()) {
        int par = q.front();
        q.pop();
        cout << par <<" ";

        for(int child : arr[par]) {
            if(vis[child] == false) {
                q.push(child);
                vis[child] = true;
            }
        }
    }
 
}
int main() {
    int n,e;
    cin>>n>>e;
    
    while(e--) {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    int src;
    cin >> src;
    bfs(src);



    return 0;
}