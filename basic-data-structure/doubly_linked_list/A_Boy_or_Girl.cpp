#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    set<char> distinkchar;

    for(char ch : s) {
        distinkchar.insert(ch);
    }




    int len = distinkchar.size();

    if(len % 2){
        cout <<"IGNORE HIM!\n";
    }else{
        cout <<"CHAT WITH HER!\n";
    }


    return 0;
}