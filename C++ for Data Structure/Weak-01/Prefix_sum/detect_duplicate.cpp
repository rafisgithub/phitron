#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int value;
    cin>>value;

    int l = 0;

    int r = n-1;
    int count = 0;
    while(l<=r){
        int mid = (l+r)/2;

        if(arr[mid]==value) count++;

        if(value>arr[mid]) l = mid+1;

        else if(value<arr[mid]) r = mid -1;
    }
    if(count>=2){
        cout<<"true"<<endl;
    }else{
        cout<<"false\n";
    }
    return 0;
}