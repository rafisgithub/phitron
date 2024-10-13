#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n]; //4 4 5 5 1 1 0 0 9 9

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int c[10] = {0};

    for(int i=0;i<n;i++){
       c[arr[i]]++;
    }

    for(int i=0;i<10;i++){
        if(c[i]!=0){
            cout << i<<" " <<c[i]<<endl;
        }
    }

    return 0;
}