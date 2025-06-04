#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
<<<<<<< HEAD

=======
>>>>>>> 72c3d6903484838a1c6ebdece41a1cd7b7859fb2
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
<<<<<<< HEAD
          
            for(int j=i+1; j<n-1;j++) {
                for(int k=j+1; k<n;k++) {
                   sum = arr[i]+ arr[j]+ arr[k];
                   if(sum==s){
                    flag = true;

                   }
=======
            for(int j=i+1; j<n-1;j++) {
                for(int k=j+1; k<n;k++) {
                    sum = arr[i] + arr[j] + arr[k];
                    if(sum == s){
                        flag = true;
                        break;
                    }
                    sum = 0;
>>>>>>> 72c3d6903484838a1c6ebdece41a1cd7b7859fb2
                }

            }

        }

        if(flag){
            cout <<"YES\n";
<<<<<<< HEAD
           
        }else{
            cout <<"NO\n";
=======
        }else{
           cout <<"NO\n";
>>>>>>> 72c3d6903484838a1c6ebdece41a1cd7b7859fb2
        }
    }
    return 0;
}