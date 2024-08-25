#include <bits/stdc++.h>

using namespace std;

bool isItValid(string s) {

    stack<char> st;

    for(int i=0;i<s.size();i++) {
        if (!st.empty() && ((s[i] == '1' && st.top() == '0') || (s[i] == '0' && st.top() == '1'))) {
            st.pop(); 
        } else {
            st.push(s[i]);
        }
    }
    return st.empty();
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        if (isItValid(s)) {
            printf("YES\n");
        } else {
           printf("NO\n");
        }
    }
    
    return 0;
}
