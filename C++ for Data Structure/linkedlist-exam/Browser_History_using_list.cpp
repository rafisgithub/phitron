#include<bits/stdc++.h>

using namespace std;

int main() {

    list<string> mylist;
    string s;

    while(true) {
        cin >> s;
        if(s == "end")
            break;
        mylist.push_back(s);
    }


    int q; cin >> q;
    string cmd,address;
    auto current = mylist.begin();
    auto temp = current;

    while(q--) {
        cin >> cmd;
        if(cmd == "visit"){
            cin >> address;
            temp = current;
            current = find(mylist.begin(), mylist.end(), address);
            if(current == mylist.end()) {
                cout << "Not Available" << endl;
                current = temp;
            }else{
                cout << *current << endl;
            }
        }else if(cmd == "next") {
            auto last = --mylist.end();
            if(current == last) {
                cout << "Not Available\n";
            }else {
                current++;
                cout << *current << endl;
            }
        }else if(cmd == "prev") {
            if(current == mylist.begin()) {
                cout << "Not Available\n";
            } else {
                current--;
                cout << *current << endl;
            }
        }

    }

    return 0;
}