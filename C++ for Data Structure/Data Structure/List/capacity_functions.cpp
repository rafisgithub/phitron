#include<bits/stdc++.h>

using namespace std;

int main(){
    list<int> myList = {10,20,30,40,50};
    cout<<myList.max_size()<<endl;
    // myList.clear();
    // myList.resize(2);
    // myList.resize(3,500);
    cout<<myList.max_size()<<endl;

    for(int val:myList){
        cout<<val <<" ";
    }
    return 0;
}