#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    bool flag = true;

    for(int i = 2; i < sqrt(n); i++) {
        if(n%i){
            flag = false; 
        }
    }

    if(flag){
        cout << "Prime NUmber\n";
    }else{
        cout << "NOt Prime";
    }
    return 0;
}