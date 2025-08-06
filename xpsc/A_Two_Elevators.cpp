#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;

        int l1_taken_time = a - 1;
        int l2_taken_time = abs(b-c) + c - 1;

        if(l1_taken_time < l2_taken_time)
            cout << 1 << endl;
        else if(l1_taken_time > l2_taken_time)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}