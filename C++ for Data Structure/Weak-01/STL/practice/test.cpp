#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> v2 = {100,200,300,400};

    v.insert(v.begin(),v2.begin(),v2.end());

    v.erase(v.begin(),v.begin()+3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}