#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while (q--)
    {
        int q_value;
        cin>>q_value;

        int flag = 0;

        for(int i=0;i<n;i++){
            if(arr[i]==q_value){
                flag = 1;
            }
        }

        if(flag){
            cout<<"found"<<endl;
        }else{
            cout<<"not found"<<endl;
        }
    }
    
    return 0;
}