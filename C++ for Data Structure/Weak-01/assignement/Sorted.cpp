#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[i]>arr[j]){
                    flag = false;
                }
            }
            
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
    return 0;
}