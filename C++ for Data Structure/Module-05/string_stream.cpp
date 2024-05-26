#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);

    cout<<s<<endl;
    // stringstream ss(s);
    stringstream ss;
    ss<<s;

    string word;
    int count = 0;
    while(ss>>word){
        count++;
        cout<<word<<endl;
    }




    return 0;
}