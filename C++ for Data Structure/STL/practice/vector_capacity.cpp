#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v = {10,11,12,13,14,15,16,17,18,19};
    v.resize(20,0);
    // v.clear();
    cout<<v.size()<<endl;

    cout<<v.capacity()<<endl;

    cout<<v.max_size()<<endl;
    v.resize(10,100);
    if(!v.empty()){
            for(int val:v){
        cout<<val<<" ";
    }
    }
    return 0;
}