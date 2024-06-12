#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    string x;
    cin>>x;
    string word;

    stringstream ss(s);
    int counter = 0;
    while(ss>>word){
        if(word == x){
            counter++;
        }
    }

    cout<<counter;
    return 0;
}