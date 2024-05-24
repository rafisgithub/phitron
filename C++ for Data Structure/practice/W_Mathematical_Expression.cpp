#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,r;
    char c1,c2;
    cin>>a>>c1>>b>>c2>>r;
    if(c1=='+' && c2 == '='){
        (a+b==r)?cout<<"Yes":cout<<a+b;
    }else if(c1 == '-' && c2 == '='){
        (a-b==r)?cout<<"Yes":cout<<a-b;
    }else if(c1 == '*' && c2 == '='){
        (a*b==r)?cout<<"Yes":cout<<a*b;
    }
    return 0;
}