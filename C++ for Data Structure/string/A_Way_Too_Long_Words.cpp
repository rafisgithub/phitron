#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;

    string s;

    while(t--) {

        cin >> s;
        int len = s.size();
        // cout << len <<endl;
        if(len <= 10){
            cout << s <<endl;
        }else{
            cout << s[0] << len-2 << s[len-1]<<endl;
        }
    }
    return 0;
}