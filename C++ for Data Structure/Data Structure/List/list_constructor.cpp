#include<bits/stdc++.h>

using namespace std;

int main(){
    
    // list<int> myList;
    list<int> list2 = {1,2,3,4};

    int arr[5] = {10 ,32,230,43};
    // list<int>myList(10,5);
    // cout<<myList.size();

    // cout<<myList.front();
    // list<int> myList(list2);

    vector<int> v = {10,230,34,540};
    // list<int> myList(arr,arr+4);

    list<int> myList(v.begin(),v.end());
    // for(auto it = myList.begin(); it!=myList.end();it++){
    //     cout<<*it<<" ";
    // }

    for(int val:myList){
        cout<<val<<" ";
    }
    return 0;
}