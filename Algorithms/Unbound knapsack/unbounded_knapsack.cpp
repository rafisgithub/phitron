#include <bits/stdc++.h>

using namespace std;

int dp[10005][10005];

int unbounded_knapsack(int n,int w,int val[],int weight[]) {
    if(n==0 || w==0) return 0;
    if(dp[n][w] != -1) return dp[n][w];
    if(weight[n-1] <= w) {
        int op1 = unbounded_knapsack(n,w-weight[n-1],val,weight) + val[n-1];
        int op2 = unbounded_knapsack(n-1,w,val,weight);
        return dp[n][w] = max(op1,op2); 
    }else{
        return dp[n][w]= unbounded_knapsack(n-1,w,val,weight);
    }
}
int main() {
    int n,w;
    cin>>n>>w;

    int val[n];
    int weight[n];

    for(int i=0;i<n;i++){
        cin >> val[i];
    }
    for(int i=0;i<n;i++){
        cin >> weight[i];
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            dp[i][j] = -1;
        }
    }
    cout << unbounded_knapsack(n,w,val,weight);

    return 0;
}