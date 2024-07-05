#include<bits/stdc++.h>

using namespace std;

int main(){
    
    list<int> myList = {10,20,30,40,50};

    // myList.push_back(100);
    // myList.push_front(20);

    // myList.pop_back();
    // myList.pop_front();

    vector<int> v = {60,70,80,90,100};

    // myList.insert(next(myList.begin(),2),v.begin(),v.end());

    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));

    // replace(myList.begin(), myList.end(), 30,55);

    
    // for(int val:myList){
    //     cout<<val<<" ";
    // }

    auto it = find(myList.begin(),myList.end(),40);

    cout<<*it;
    return 0;
}