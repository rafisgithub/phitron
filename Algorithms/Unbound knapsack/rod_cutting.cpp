#include <bits/stdc++.h>

using namespace std;

int unbound_knapsack(int n,int w,int val[],int weight[]) {
    if(n==0 || w == 0)
        return 0;
    
    if(weight[n-1] <= w){
        int op1 = unbound_knapsack(n,w-weight[n-1],val,weight) + val[n-1];
        int op2 = unbound_knapsack(n-1,w,val,weight);
        return max(op1,op2);
    }else {
        return unbound_knapsack(n-1,w,val,weight);
    }
}
int main() {

    int n;
    cin>>n;
    int val[n];
    int weight[n];

    for(int i=0;i<n;i++) {
        cin >> val[i];
        weight[i] = i+1;
    }

   cout << unbound_knapsack(n,n,val,weight);
    return 0;
}