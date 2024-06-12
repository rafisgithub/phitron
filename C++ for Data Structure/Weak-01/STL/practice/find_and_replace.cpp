#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    int old_val,new_val;
    cin>>old_val>>new_val;

    replace(v.begin(),v.end(),old_val,new_val);

    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    int x;
    cin>>x;

   auto it = find(v.begin(),v.end(),x);

   if(it!=v.end()){
    cout<<"Yes";
   }else{
    cout<<"-1";
   }
    return 0;
}