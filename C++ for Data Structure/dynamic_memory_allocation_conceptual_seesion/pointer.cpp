#include<bits/stdc++.h>

using namespace std;

int main() {

    int a = 10;

    cout << &a << endl;
    int* ptr = &a;

    cout << ptr <<endl;

    cout << *ptr <<endl;
     
    *ptr = 100;

    cout << *ptr << endl;
    return 0;
}