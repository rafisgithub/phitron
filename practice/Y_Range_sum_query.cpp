#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
       cin >> arr[i]; 
    }

    long long prefix_sum[n];

    prefix_sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = arr[i] + prefix_sum[i-1];
    }
    
    
    while(q--) {

        int l,r;
        cin>>l>>r;
        l--;
        r--;

        long long sum = 0;
        if(l==0)
            sum = prefix_sum[r];
        else
            sum = prefix_sum[r] - prefix_sum[l-1];

        cout << sum <<endl;

       
    }
    return 0;
}