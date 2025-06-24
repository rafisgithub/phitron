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


    for(int position=0; position<n;position++) {
        int sum_of_before_postion = 0;
        int sum_of_after_position = 0;

        sum_of_before_postion = position == 0 ? 0 : prefix_sum[position-1];
        sum_of_after_position = prefix_sum[n-1] - prefix_sum[position];


        if(sum_of_before_postion == sum_of_after_position) {
            cout << position << endl;
            break;
        }
    }


    
    return 0;
}