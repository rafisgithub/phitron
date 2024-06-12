#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[100010];
    while (fgets(s, 100010, stdin)) {
        char temp[100010];
        int len = strlen(s);
        int j = 0; 

        for (int i = 0; i < len; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                temp[j++] = s[i]; 
            }
        }
        temp[j] = '\0'; 
        
        sort(temp, temp + j); 

        cout << temp << "\n"; 
    }
    return 0;
}
