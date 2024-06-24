#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i<n; i++)
    {
       cin>>arr[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
       int l = 0;
       int r = n-1;

       int x;
       cin>>x;

       int flag = 0;

       while (l<=r)
       {
        int mid = (l+r)/2;
        if(arr[mid]==x){
            flag = 1;
            break;
        }

        if(x>arr[mid]){
            l = mid+1;
        }else{
            r = mid - 1;
        }
       }

       if(flag){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO\n";
       }
       
    }
    
    
    return 0;
}