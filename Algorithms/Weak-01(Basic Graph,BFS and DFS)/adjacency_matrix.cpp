#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,e;
    cin >> n >> e ;

    int mat[n][n];
    memset(mat,0,sizeof(mat));

    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }
    while(e--)
    {
        int a,b;
        cin >> a>>b;
        mat[a][b] = 1;
        mat[b][a] = 1;

    }
    cout<<endl;

    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }

    if(mat[1][5]){
        cout <<"Connection ase\n";
    }else{
        cout <<"Connection nai\n";
    }
    return 0;
}