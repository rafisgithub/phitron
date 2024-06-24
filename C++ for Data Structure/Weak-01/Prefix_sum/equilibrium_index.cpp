#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    
    int leftSum = 0;
    int rightSum = 0;

    for (size_t i = 0; i < n; i++)
    {
        rightSum+=arr[i];
    }
    
    int ans;

    for (size_t i = 0; i < n; i++)
    {
        rightSum-=arr[i];

        if(leftSum==rightSum){
            ans = i;
            break;
        }

        leftSum+=arr[i];
    }

    cout<<ans<<endl;
    
    return 0;
}