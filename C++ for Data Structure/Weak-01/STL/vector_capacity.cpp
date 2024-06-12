#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v(5);
    cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(23);
    cout<<v.capacity()<<endl;
    v.push_back(23);
    v.push_back(88);
    cout<<v.capacity()<<endl;

    return 0;
}