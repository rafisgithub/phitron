#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[100005];

    while (fgets(s, 100005, stdin)) {
    char ns[100005];
    int j = 0;

    for(int i=0; s[i] != '\0'; i++) {

        if(s[i] != ' ' && s[i] != '\n') {
            ns[j++] = s[i];
        }
    }

    ns[j] = '\0'; 

    sort(ns, ns + j);

    cout << ns << endl;
    }
    return 0;
}
