#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    // int pos = s.find("EGYPT");
    while (s.find("EGYPT")!=-1)
    {
        s.replace(s.find("EGYPT"),5," ");
    }
    
    cout<<s;

    return 0;
}
