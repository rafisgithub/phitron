#include <bits/stdc++.h>

using namespace std;

bool sumset_sum(int n, int arr[], int s) {
   
    bool dp[s+1] = {false};
    dp[0] = true; 
    
    for (int i = 0; i < n; i++) {
        for (int j = s; j >= arr[i]; j--) {
            dp[j] = dp[j] || dp[j - arr[i]];
        }
    }
    
    return dp[s];
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, m;
        cin >> n >> m;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  
        }

        int target = 1000 - m;  
        
        if (target < 0) {
            cout << "NO\n"; 
        } else if (sumset_sum(n, arr, target)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
