#include <bits/stdc++.h>

using namespace std;

int dp[1005][1005];

bool subset_sum(int n,int a[],int s) {
    if(n==0){
        if(s==0) return true;
        else return false;
    }
    if(dp[n][s] !=-1) {
        return dp[n][s];
    }
    if(a[n-1] <=s){

        bool op1 = subset_sum(n-1,a,s-a[n-1]);
        bool op2 = subset_sum(n-1,a,s);
        return dp[n][s] = op1 || op2;
    }else{
        bool op2 = subset_sum(n-1,a,s);
        return dp[n][s] = op2;
    }

    
}
int main(){
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int s;
    cin>>s;

    memset(dp,-1,sizeof(dp));

    if(subset_sum(n,a,s)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    
    return 0;
}