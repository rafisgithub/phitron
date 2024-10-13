#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n,q;
    cin>>n>>q;

    long long int arr[n];

    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long int pre_sum[n];

    pre_sum[0] = arr[0];

    for(long long int i=1;i<n;i++){
        pre_sum[i] = arr[i] + pre_sum[i-1];
    }


    while(q--) {
        long long int l,r;
        cin>>l>>r;
        r--;
        l--;
        if(l==0){
            cout << pre_sum[r]<<endl;
        }else{
            cout << pre_sum[r] - pre_sum[l-1]<<endl;
        }
    }
    return 0;
}