#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int idx,val;

    cin >> idx;

    for(int i = idx; i <   n-1; i++) {
        arr[i] = arr[i+1];
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    
    return 0;
}