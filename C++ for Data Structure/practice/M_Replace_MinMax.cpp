#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int mn = INT_MAX;
    int mn_index;
    int mx = INT_MIN;
    int mx_index;


    for(int i = 0; i < n; i++) {
        if(arr[i] < mn){
            mn = arr[i];
            mn_index = i;
        }

        if(arr[i] > mx) {
            mx = arr[i];
            mx_index = i;
        }
    }


    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    arr[mx_index] = mn;
    arr[mn_index] = mx;

    for(int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }

    return 0;
}