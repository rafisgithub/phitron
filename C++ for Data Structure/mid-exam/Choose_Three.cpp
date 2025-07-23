#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n,s;

        cin >>n >> s;

        int arr[n];

        for(int i=0; i<n;i++) {
            cin>>arr[i];
        }

        int sum = 0;
        bool flag = false;

        for(int i=0; i<n-2;i++) {
          
            for(int j=i+1; j<n-1;j++) {
                for(int k=j+1; k<n;k++) {
                   sum = arr[i]+ arr[j]+ arr[k];
                   if(sum==s){
                    flag = true;

                   }
            for(int j=i+1; j<n-1;j++) {
                for(int k=j+1; k<n;k++) {
                    sum = arr[i] + arr[j] + arr[k];
                    if(sum == s){
                        flag = true;
                        break;
                    }
                    sum = 0;
                }

            }

        }

        if(flag){
            cout <<"YES\n";
           
        }else{
            cout <<"NO\n";
        }else{
           cout <<"NO\n";
        }
    }
    return 0;
}