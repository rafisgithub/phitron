

// Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL stack to solve this problem.
#include<bits/stdc++.h>

using namespace std;

int main() {

    stack<int> s;
    queue<int> q;

    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        int val;
        cin >> val;
        s.push(val);
    }

    int m;
    cin >> m;

    for(int i=1;i<=m;i++) {
        int val;
        cin >> val;

        q.push(val);
    }


    if(s.size() != q.size()) {
        cout << "NO\n";
        return 0;
    }

    bool flag = true;

    while(!s.empty()) {
        if(s.top() != q.front()) {
            flag = false;
            break;
        }

        s.pop();
        q.pop();
    }

    if(flag) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
    return 0;
}