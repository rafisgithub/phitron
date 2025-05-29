#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;

    while(t--) {
        int n,s;
        bool flag = false;

        cin >>n >> s;

        int arr[n];

        for(int i=0; i<n;i++) {
            cin>>arr[i];
        }

        int sum = 0;

        for(int i=0; i<n-2;i++) {
            cout << "i = " << i << endl;
            for(int j=i+1; j<n-1;j++) {
                 cout << "j = " << j << endl;
                for(int k=j+1; k<n;k++) {
                    cout << "k = " << k << endl;
                }

            }

        }

        // if(flag){
        //     cout <<"NO\n";
        // }else{
        //    cout <<"YES\n";
        // }
    }
    return 0;
}