#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;

    getline(cin,s);

    bool found = false;
    int count = 0;

    for(char c:s){
        if(isalnum(c)){
            if(found==false) count++;
            found = true;
        }else{
            found = false;
        }
    }
    
    cout<<count;

    return 0;
}