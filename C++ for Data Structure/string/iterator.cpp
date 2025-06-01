#include<bits/stdc++.h>

using namespace std;

int main() {

    string s = "Hello Wolrd";

   string::iterator it = s.begin();

    string * ptr = &(*it);

   cout << ptr << endl;

    
    return 0;
}