#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,e;
    cin>>n>>e;

    int mat[n][n];

    memset(mat,0,sizeof(mat));

    while(e--) {
        int a,b;
        cin>>a>>b;

        mat[a][b] = 1;
    }

    int q;
    cin>>q;

    while(q--) {
        int node1,node2;
        cin>>node1>>node2;
        if (node1 ==  node2) {
            cout << "YES" << endl;
        }else if(mat[node1][node2]){
            cout <<"YES\n";
        }else {
            cout <<"NO\n";
        }
    }
    return 0;
}