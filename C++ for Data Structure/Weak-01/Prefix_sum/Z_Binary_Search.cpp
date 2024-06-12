#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    while (q--)
    {
        int searching_element;
        cin>>searching_element;
        int l=0;
        int r=n-1;
        bool found = false;

        while(l<=r){
            int mid = (l+r)/2;

            if(arr[mid]==searching_element){
                found = true;
                break;
            }

            if(searching_element>arr[mid]){
                l = mid+1;
            }else{
                r = mid - 1;
            }

        }
        
        if(found){
                cout<<"found"<<endl;
            }else{
                cout<<"not found"<<endl;
            }



    }
    
    return 0;
}