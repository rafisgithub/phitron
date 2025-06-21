#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,t;
    cin >> n  >> t;

    int arr[n+1];

    for(int i=1; i<=n;i++) {
        cin>>arr[i];
    }

    int prefix_sum[n+1];


    prefix_sum[0] = arr[1];

    for(int i=1; i<=n;i++) {
        prefix_sum[i] = arr[i] + prefix_sum[i-1];
    }


    printf("\n");


    while(t--) {
        int l,r;
        cin>>l>>r;
        cout << prefix_sum[r] - prefix_sum[l-1] << endl;
    }
    return 0;
}