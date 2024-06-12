#include<bits/stdc++.h>

using namespace std;

int* sort_it(unsigned int n){
    int* arr = new int[n];

    for(unsigned int i=0;i<n;i++){
        cin>>arr[i];
    }

    // for(unsigned int i=0;i<n-1;i++){
    //     for(unsigned j=i+1;j<n;j++){
    //         if(arr[i]<arr[j]){
    //             int temp;
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    sort(arr,arr+n);

    return arr;
}
int main(){
    unsigned int n;
    cin>>n;

    int *arr =  sort_it(n);

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}