#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string digits;
        cin >> digits;
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i = 0; i < digits.size(); i++){
            if(i <= 2){
                sum1 += digits[i] - '0'; 
            } else {
                sum2 += digits[i] - '0'; 
            }
        }
        if(sum1 == sum2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
