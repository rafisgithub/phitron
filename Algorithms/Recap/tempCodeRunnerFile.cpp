#include <bits/stdc++.h>

using namespace std;

void convert(int n,vector<pair<int,int>> adj[]) {
    int mat[n][n];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t  j= 0; j < n; j++)
        {
            mat[i][j] = -1;
            if(i==j) {
                mat[i][j] = 0;
            }
        }
        