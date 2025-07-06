#include<bits/stdc++.h>

using namespace std;

void fun(int* &p) {
    cout << &p <<endl;
}

int main() {
    
    int x = 1;

    int*p = &x;
    fun(p);

    cout << p <<endl;

    return 0;
}