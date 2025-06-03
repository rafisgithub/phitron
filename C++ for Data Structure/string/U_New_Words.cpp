#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    int len = s.size();

    int counter[26] = {0};

    for(int i = 0; i <len ; i++) {
        if(s[i] >= 'a' && s[i] <='z' && s[i] =='e' || s[i] =='g' || s[i] =='y' || s[i] == 'p' || s[i] == 't'){
            int val = s[i] - 'a';
            counter[val]++;
        }else if(s[i] >= 'A' && s[i] <= 'Z' && s[i] == 'E' || s[i]=='G' || s[i]=='Y' || s[i] == 'P' || s[i] == 'T'){
            int val = s[i] - 'A';
            counter[val]++;
        }
    }

    // egypt

    int minVal = INT_MAX;

    for(int i = 0; i < 26; i++) {
        if(counter[i] != 0){
            if(minVal > counter[i]){
                minVal = counter[i];
            }
        }
    }
    cout << minVal <<endl;

    
    

    return 0;
}