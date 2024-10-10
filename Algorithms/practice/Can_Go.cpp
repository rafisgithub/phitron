#include <bits/stdc++.h>

using namespace std;
const int N = 1005;
int n,m;
char arr[N][N];


pair<int,int> src;

pair<int,int> d[4] = {{0,1},{0,-1},{-1,0},{1,0}};
bool vis[N][N];


bool valid(int i,int j) {
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    else
        return true;
}
bool dfs(int si,int sj) {

    vis[si][sj] = true;

    if(arr[si][sj] == 'B') return true;

    for(int i=0;i<4;i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if(valid(ci,cj) && vis[ci][cj] == false && arr[ci][cj]!='#') {
            if(dfs(ci,cj)){
                return true;
            }
        }
    }
    return false;

}
int main() {

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
            if(arr[i][j] == 'A'){
                src = {i,j};
            }
        }
    }

    memset(vis,false,sizeof(vis));

    bool can_go = dfs(src.first,src.second);

    if(can_go){
        cout <<"YES\n";
    }else {
        cout <<"NO\n";
    }
    return 0;
}