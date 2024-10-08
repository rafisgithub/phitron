#include <bits/stdc++.h>

using namespace std;

int knapsack(int n,int weight[], int values[],int W){
    
    if(n < 0 || W==0) return 0;

    if(weight[n] <= W){
        int op1 = knapsack(n-1,weight,values,W-weight[n]) + values[n];
        int op2 = knapsack(n-1,weight,values,W);
        return max(op1,op2);
    } else {
        int op2 = knapsack(n-1,weight,values,W);
        return op2;
    }
}
int main(){
    int n,W;
    cin>>n>>W;

    int weight[n];
    int value[n];

    for(int i=0;i<n;i++) {
        cin >> weight[i] >> value[i];
    }

    cout << knapsack(n-1,weight,value,W) << endl;
    return 0;
}