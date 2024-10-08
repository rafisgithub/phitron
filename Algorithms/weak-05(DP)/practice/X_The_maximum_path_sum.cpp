#include <bits/stdc++.h>

using namespace std;
int rec(int i,int j,int n,int m,int arr[]) {
    if(i>n || j>m) return 0;

    return rec(i+1,j+1,n,m,arr);

}
int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j]; 
        }  
    }

   cout << rec(0,0,n-1,m-1,arr)<<endl;

    return 0;
}