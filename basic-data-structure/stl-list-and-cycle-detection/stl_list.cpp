#include<bits/stdc++.h>

using namespace std;

int main() {

    list<int> l(10,5);

    for(auto it = l.begin(); it != l.end(); ++it) {
        cout << *it << " ";
    }


    return 0;
}