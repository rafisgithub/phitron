#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> mp;
    mp.insert({"Shakib Al hasan",75});
    mp.insert({"Tamim Iqbal",19});
    mp.insert({"Shamim",79});

    // mp["Rafi"] = 45;
    // if(mp.count("Rafi")){
    //     cout << "Ase\n";
    // }else{
    //     cout<<"Nei\n";
    // }

    for(auto it = mp.begin();it!=mp.end();it++){
        cout << it->first<<" "<<it->second<<endl;
    }

    return 0;
}