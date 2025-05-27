#include<bits/stdc++.h>

using namespace std;
int solve(int *arr, int n) {
    int mx = INT_MIN;

    for(int i=0; i<n;i++) {
        // if(arr[i] > mx) {
        //     mx = arr[i];
        // }

        mx = max(arr[i],mx);
    }

    return mx;
}
int main() {

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n;i++) {
        cin>>arr[i];
    }
   
   cout << solve(arr,n) << endl;

    return 0;
}