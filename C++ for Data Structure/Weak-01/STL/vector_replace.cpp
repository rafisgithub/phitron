#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,2,2,2,2};

    replace(v.begin(),v.end(),2,100);
    return 0;
}