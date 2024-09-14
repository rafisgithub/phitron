#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<string,int> identity;

    identity["Rahim"] = 20;
    identity["Rafi"] = 21;


    identity.insert(make_pair("Aziz",22));

    identity.insert({"Nayeem",28});

for(auto it: identity){
    cout<<it.first <<":"<<it.second<<endl;
}

    return 0;
}