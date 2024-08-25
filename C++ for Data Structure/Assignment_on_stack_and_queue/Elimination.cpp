#include <bits/stdc++.h>

using namespace std;

bool isEmptyAfterEliminations(string s) {

    queue<char> q;

    for(int i=0;i<s.size();i++) {
        if (!q.empty() && ((s[i] == '1' && q.front() == '0'))) {
            q.pop(); 
        } else {
            q.push(s[i]);
        }
    }
    return q.empty();
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        if (isEmptyAfterEliminations(s)) {
            printf("YES\n");
        } else {
           printf("NO\n");
        }
    }
    
    return 0;
}