#include <bits/stdc++.h>

using namespace std;

int fun(char s[],int n) {
    if(s[n=='\0']) return 0;
    int len = fun(s,n+1);
    return len+1;
}
int main(){
    char s[100];
    cin>>s;
   

    int len = fun(s,0);
    cout << len;
    return 0;
}