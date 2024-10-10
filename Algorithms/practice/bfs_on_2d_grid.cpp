#include <bits/stdc++.h>

using namespace std;

int n,m;
bool vis[30][30];
char arr[30][30];

vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int i, int j){
    if(i<0 || i>n || j<0 || j>m)
        return false;
    else
        return true; 
}
void bfs(int si,int sj) {
    queue<pair<int,int>> q;

    q.push({si,sj});
    vis[si][sj] = true;

    while(!q.empty()) {
        pair<int,int> f = q.front();
        q.pop();
        cout << f.first <<" "<<f.second <<endl;

        for(int i=0;i<4;i++){
            int ci = f.first + d[i].first;
            int cj = f.second + d[i].second;

            if(valid(ci,cj) == true && vis[ci][cj] == false){
                q.push({ci,cj});
                vis[ci][cj] = true;
            }
        }
    }
}
int main() {
    
    cin>>n>>m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }

    memset(vis,false,sizeof(vis));

    int si,sj;
    cin>>si>>sj;

    bfs(si,sj);

    return 0;
}