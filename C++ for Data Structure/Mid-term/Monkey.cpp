#include <bits/stdc++.h>

using namespace std;


bool skipSpace(char a, char b) {
    if (a == ' ') return false;  
    if (b == ' ') return true;   
    return a < b;
}

int main() {
    string s;
    while (getline(cin, s)) {
        
        size_t len = s.length();
        
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }
 
        sort(s.begin(), s.end(), skipSpace);
        
        cout << s << endl;
    }

    return 0;
}
