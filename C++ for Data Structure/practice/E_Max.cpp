#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_val = INT_MIN;

    for(int i=0;i<n;i++){
    max_val = max(max_val,arr[i]);
    
    }
   
   cout<<max_val<<endl;
    return 0;
}