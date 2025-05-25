#include<bits/stdc++.h>

using namespace std;

int* g;

void fun() {

    int x = 10;
    int* x = new int(10);
    g = &x;
    return;
}
int main() {

    fun();

    cout << g <<endl;

    return 0;
}