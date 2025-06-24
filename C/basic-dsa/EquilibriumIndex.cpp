#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n;i++) {
        cin>>arr[i];
    }


    cout << endl;

    int prefix_sum[n] = {0};

    prefix_sum[0] = arr[0];

    for(int i=1; i<n;i++) {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }


    for(int i=0; i<n;i++) {
        int left_sum = 0;
        int right_sum = 0;

        left_sum = i == 0 ? 0 : prefix_sum[i-1];
        right_sum = prefix_sum[n-1] - prefix_sum[i];

        cout << left_sum << " " << right_sum <<endl;

        if(left_sum == right_sum) {
            cout << i << endl;
            break;
        }
    }


    
    return 0;
}