#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,t; 

    cin >> n >> t;

    vector<int> v(n+1);

    for(int i=1; i<=n;i++) {
        cin>>v[i];
    }

    vector<long long int> prefix_sum(n+1);

    prefix_sum[1] = v[1];

    for(int i=2; i<=n;i++) {
        prefix_sum[i] = prefix_sum[i-1] + v[i];
    }

    long long int sum = 0;


    while(t--){
        int l,r;
        cin >> l >> r;

        if(l == 1){
            sum = prefix_sum[r];
        }else{
            sum = prefix_sum[r] - prefix_sum[l-1];
        }

        cout << sum <<endl;
    }

    

    return 0;
}