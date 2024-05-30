#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    while(t--){
        int n;
        int arr[n];

        if(n%2!=0){
            cout<<0<<endl;
        }else{
            int x = n/2;
            int odd = 0;
            int even = 0;

          for(int i=0;i<n;i++){
           if(arr[i]%2==0){
            even++;
           }else{
            odd++;
           }
           if(even==x){
            
           }
          }


        }

    }
    return 0;
}