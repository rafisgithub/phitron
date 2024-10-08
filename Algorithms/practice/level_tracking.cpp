#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;

vector<int> arr[N];
bool vis[N];
int level[N];

void bfs_with_level_track(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    
    while(!q.empty()) {
        int par = q.front();
        q.pop();

        cout << par <<" er level "<< level[par]<< endl;

        for(int child : arr[par]) {
            if(vis[child] == false) {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
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
    cin>>src;

    bfs_with_level_track(src);

    return 0;
}