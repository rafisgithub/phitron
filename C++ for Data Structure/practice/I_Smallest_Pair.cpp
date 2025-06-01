#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin >> n;

        int arr[n+1];

        for(int i = 1; i <= n; i++) {
            cin>>arr[i];
        }

        long long min_sum = INT_MAX;

        for(int i = 1; i < n; i++) {
            for(int j = i+1; j <= n; j++) {
                long long x = arr[i] + arr[j] + j - i;
                min_sum = min(min_sum,x);
            }
        }

        cout << min_sum <<endl;
    }
    return 0;
}