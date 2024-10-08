#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long int max1 = LLONG_MIN, max2 = LLONG_MIN;
        int index1 = -1, index2 = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] > max1) {
                max2 = max1; 
                max1 = arr[i]; 
                index2 = index1; 
                index1 = i;
            } else if (arr[i] > max2) {
                max2 = arr[i]; 
                index2 = i; 
            }
        }

        if (index1 < index2) {
            cout << index1 << " " << index2 << endl;
        } else {
            cout << index2 << " " << index1 << endl;
        }
    }

    return 0;
}
