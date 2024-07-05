#include<bits/stdc++.h>

using namespace std;


// void remove_duplicate_value(){

// }
int main(){
    list<int> LinkedList;

    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        LinkedList.push_back(val);
    }

    LinkedList.sort();
    LinkedList.unique();
    
    for(int val : LinkedList){
        cout <<val <<" ";
    }
    
    return 0;
}