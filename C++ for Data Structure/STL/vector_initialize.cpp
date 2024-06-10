#include<bits/stdc++.h>

using namespace std;

int main(){
    // vector<int> v; type 1
    
    // vector<int> v(5); type 2

    // vector<int> v(5,10); type 3

    // vector<int> v2(5,100);

    // vector<int> v(v2); type 4

    int arr[5] = {32,32,43,23,23};

    vector<int> v(arr,arr+5);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}