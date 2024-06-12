#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int sum = 0;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int min_num = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum = arr[i]+arr[j]+j-i;
                 min_num = min(min_num,sum);
                
            }
        }
            cout<<min_num;
    }

    return 0;
}