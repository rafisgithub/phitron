#include <bits/stdc++.h>

using namespace std;
const int N = 100;

int parent[N];
bool vis[N];
vector<int> arr[N];

void path_printing(int src) {
    queue<int> q;
    q.push(src);

    vis[src] = true;

    while(!q.empty()) {
        int f = q.front();
        q.pop();

        for(int child : arr[f]) {
            if(vis[child] == false) {
                q.push(child);
                vis[child] = true;
                parent[child] = f;
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
    int src,des;
    cin>>src>>des;

    memset(parent,-1,sizeof(parent));
    memset(vis,false,sizeof(vis));

    path_printing(src);

    int x = des;

    vector<int> path;
    while(x  != -1) {
       path.push_back(x);
       x = parent[x];
    }
    
    reverse(path.begin(),path.end());

    for(int p : path){
        cout << p << " ";
    }
    return 0;
}