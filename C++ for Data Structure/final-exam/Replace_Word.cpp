#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        string s,x;
        cin >> s >> x;
        
        int pos = s.find(x);

        int size_of_x = x.size();
        
       while(pos != -1){

            s.replace(pos,size_of_x, "#");

            pos = s.find(x,pos+1);
       }

        cout << s <<endl;
    }
    return 0;
}