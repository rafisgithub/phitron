#include<bits/stdc++.h>
using namespace std;

void printList(const list<int>& lst) {
    cout << "L -> ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;

    cout << "R -> ";
    for (auto it = lst.rbegin(); it != lst.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    
    list<int> list;
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            list.push_front(v);
        } else if (x == 1) {
            list.push_back(v);
        } else if (x == 2) {
            if (v < 0 || v >= list.size()) {
            } else {
                auto it = list.begin();

                for (int i = 0; i < v; ++i) {
                    ++it;
                }   

                list.erase(it);
            }
        }

        printList(list);
    }

    return 0;
}