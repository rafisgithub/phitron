#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e6+5;

ll dp[N];

ll fib(ll n){
    if(n==0 || n == 1) return n;

    if(dp[n]!=-1){
        return dp[n];
    }
    ll  ans = fib(n-1)+fib(n-2);
    dp[n] = ans;
    return ans;
}
int main(){
    ll n;
    cin>>n;

    memset(dp,-1,sizeof(dp));

    cout << fib(n);
    return 0;
}