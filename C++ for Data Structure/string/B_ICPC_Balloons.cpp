#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        char s[n];

        for(int i = 0; i < n; i++) {
            cin>>s[i];
        }

        int fre_arr[26] = {0};

       for(int i = 0; i < n; i++) {
            int val = s[i]-'A';
            fre_arr[val]++;
       }



       int sum = 0;

       for(int i = 0; i < 26; i++) {
        if(fre_arr[i] !=0){
            if(fre_arr[i] > 1){
                sum += fre_arr[i] + 1;
            }else{
                sum = sum + 2;
            }
        }
       }

       cout << sum <<endl;
    }
    return 0;
}