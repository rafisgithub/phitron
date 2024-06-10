#include<bits/stdc++.h>

using namespace std;

int main(){
     int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character left in the input buffer

    vector<string> v(n);

    for(int i = 0; i < n; i++) {
        getline(cin, v[i]);
    }

    for(string val : v) {
       
        val[0] = toupper(val[0]);
        cout << val << endl;
    }


    return 0;
}