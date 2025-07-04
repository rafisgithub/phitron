#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 1; i <=10; i++) {
        for(int j = 1; j <= 10; j++) {
            cout << n << " * " << j << " = " << n *j ;
        }
        cout << endl;
    }
    
    return 0;
}