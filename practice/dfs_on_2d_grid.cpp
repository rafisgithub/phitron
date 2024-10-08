#include <bits/stdc++.h>

using namespace std;

int n,m;

bool vis[20][20];

vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int cr,int cl) {
    if(cr<0 || cr>=n || cl<0 || cl >=m) return false;
    return true;
}
void dfs(int sr,int sc){
    cout << sr <<" "<< sc <<endl;
    vis[sr][sc] = true;

    for(int i=0;i<4;i++){
        int cr = sr + d[i].first;
        int cl = sc + d[i].second;

        if(valid(cr,cl) && !vis[cr][cl]){
            dfs(cr,cl);
        }
    }
    

}
int main(){

    cin>>n>>m;

    char a[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }  
        }
   
        int sr,sc;
        cin>>sr>>sc;

        dfs(sr,sc);


    return 0;
}