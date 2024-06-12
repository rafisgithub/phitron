#include<bits/stdc++.h>

using namespace std;
int* fun(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return arr;
}
int main(){
   int *arr = fun();
  cout<<arr;
    return 0;
}