#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {1,2,3,3,4,3,3,2,2,2,223,2};

//  vector<int> ::iterator it;
//  it = find(v.begin(),v.end(),3);
 auto it = find(v.begin(),v.end(),3);

 cout<<*it;
    return 0;
}