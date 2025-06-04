#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b;
    char x;

    cin >> a >> x >> b;
    
    switch (x) 
    {
    case '>':
        if(a>b){
            cout <<"Right\n";
        }else{
            cout <<"Wrong\n";
        }
        break;
    case '<':
        if(a<b){
            cout <<"Right\n";
        }else{
            cout <<"Wrong\n";
        }
        break;
    case '=':
        if(a==b){
            cout <<"Right\n";
        }else{
            cout <<"Wrong\n";
        }   
    
    default:
        break;
    }

    return 0;
}