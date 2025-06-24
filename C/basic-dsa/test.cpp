#include<bits/stdc++.h>

using namespace std;

int main() {

    int counter = 0;

    for (int i = 1; i < 100; i++)
        for (int j = i; j > 0; j--)
           counter++;
    
    cout << counter;

    return 0;
}