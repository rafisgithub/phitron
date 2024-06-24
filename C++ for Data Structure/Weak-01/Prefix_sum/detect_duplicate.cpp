#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int value;
    cin>>value;

    int l = 0;

    int r = n-1;
    int count = 0;
    bool is_duplicate = false;
    while(l<=r){
        int mid = (l+r)/2;

        if(arr[mid]==value){
            if(arr[mid-1]==value || arr[mid+1]==value){
                is_duplicate = true;
                break;
            }
        
            // count++;
            // int left = mid - 1;
            // while(left>=0 && arr[left] == value){
            //     left--;
            //     count++;
            // }
            // int right = mid+1;
            // while (right<n && arr[right]==value)
            // {
            //      right++;
            //      count++;
            // }
            // break;
        } 
            

        if(value>arr[mid]) l = mid+1;

        else if(value<arr[mid]) r = mid -1;

    }
    if(is_duplicate){
        cout<<"true"<<endl;
    }else{
        cout<<"false\n";
    }
    return 0;
}