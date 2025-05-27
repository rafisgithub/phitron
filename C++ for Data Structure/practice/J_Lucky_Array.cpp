#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

   int mn = INT_MAX;

    for(int i = 0; i < n; i++) {
        mn = min(arr[i],mn);
    }


   int counter = 0;

   for(int i = 0; i < n; i++) {
       if(mn == arr[i]){
            counter++;
       }
   }

   if(counter % 2 ==0){
        cout << "Unlucky"<<endl;
   }else{
        cout << "Lucky" <<endl;
   }
    return 0;
}