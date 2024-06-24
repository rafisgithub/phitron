#include<bits/stdc++.h>

using namespace std;
void runningSum(vector<int> &arr,int n){
    long long int pre_sum[n];
    pre_sum[0] = arr[0];
    for(int i=1;i<n;i++){
        pre_sum[i] = arr[i]+pre_sum[i-1];
    }

    
    for(int i=0;i<n;i++){
       cout<<pre_sum[i]<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    runningSum(arr,n);
    return 0;
}