#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c;
    char x;

    cin >> a >> x >> b >> c;
    
    switch (x) 
    {
    case '+':
        if(a+b==c){
            cout <<"Right\n";
        }else{
            cout <<"Wrong\n";
        }
        break;
    case '-':
        if(a-b == c){
            cout <<"Right\n";
        }else{
            cout <<"Wrong\n";
        }
        break;
    case '*':
        if(a*b==c){
            cout <<"Right\n";
        }else{
            cout <<"Wrong\n";
        }   
    
    default:
        break;
    }

    return 0;
}