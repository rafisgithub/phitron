#include<bits/stdc++.h>

using namespace std;

int main(){
    
    list<int> myList = {10,20,30,40,50};

    // myList.remove(23);

    // myList.sort();

    // myList.sort(greater<int>());

    // myList.unique();

    myList.reverse();

    for(int val:myList){
        cout<<val<<" ";
    }
    
    return 0;
}