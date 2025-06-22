#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,q;
    cin >> n >> q;

   int arr[n];

    for(int i=0; i<n;i++) {
        cin>>arr[i];
    }


    sort(arr,arr+n);



    while(q--){
    bool flag = false;
    int val;
    cin >> val;
    
    int l = 0;
    int r = n -1; 

    while(l<=r){
        int mid = (l+r)/2;
        if(val == arr[mid]){
            flag = true;
            break;
        }else if(val < arr[mid]){
            r = mid -1;
        }else{
            l = mid + 1;
        }
    }
    if(flag){
        cout << "found\n";
    }else {
        cout <<"not found\n";
    }
    }

    return 0;
}