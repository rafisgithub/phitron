#include<bits/stdc++.h>

using namespace std;

pair<int*,int> fun() {
    int n;
    cin>>n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

    }

    return {arr,n};
}
int main() {

    auto [arr,n] = fun();

    for(int i = 0; i < n; i++) {
        cout << arr[i] <<" ";cd
    }

    
    
    return 0;
}