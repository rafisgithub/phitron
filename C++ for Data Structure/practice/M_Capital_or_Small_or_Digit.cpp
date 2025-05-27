#include<bits/stdc++.h>

using namespace std;

int main() {

    char x;
    cin >> x;

    if(x >= 65 && x <= 91 || x >= 97 && x <= 123){
        cout << "ALPHA" << endl;

        if(x >= 65 && x <= 91){
            cout << "IS CAPITAL" <<endl;
        }

        if( x >= 97 && x <= 123) {
            cout << "IS SMALL" << endl;
        }
    }else if(x >= 48 && x <= 57){
        cout << "IS DIGIT" << endl;
    }
    return 0;
}