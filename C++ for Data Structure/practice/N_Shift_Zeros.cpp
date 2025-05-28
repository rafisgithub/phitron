#include<bits/stdc++.h>

using namespace std;

void solve(int* arr,int n) {
    int counter = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] ==0 ){
            counter++;
        }else{
            cout << arr[i] << " ";
        }
    }

    for(int i = 0; i < counter; i++) {
         cout << "0" <<" ";
    }

}
int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    solve(arr,n);

    return 0;
}