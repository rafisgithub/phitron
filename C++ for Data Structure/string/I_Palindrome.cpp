#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin>>s;

    string temp = s;

    reverse(s.begin(),s.end());

    if(s == temp){
        cout <<"YES\n";
    }else cout <<"NO\n";
    return 0;
}