#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    while(t--){
        int start_index;
        int end_index;

        cin>>start_index>>end_index;

        int sum = 0;

        for(int i = start_index-1;i<end_index;i++){
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}