// Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

#include<bits/stdc++.h>

using namespace std;

class MyStack{
    public:
        vector<int> v;

        void push(int val) {
            v.push_back(val);
        }

        void pop() {
            v.pop_back();
        }

        int top() {
            return v.front();
        }

        int size() {
            return v.size();
        }

        bool empty() {
            if(v.size() == 0)
                return true;
            else
                return false;
        }
};

int main() {


    MyStack st1;
    MyStack st2;

    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        int val;
        cin >> val;
        st1.push(val);
    }

    int m;
    cin >> m;

    for(int i=1;i<=m;i++) {
        int val;
        cin >> val;
        st2.push(val);
    }

    if(st1.size() != st2.size()) {
        cout << "NO\n";
        return 0;
    }
    bool flag = true;

    while(!st1.empty()) {
        if(st1.top() != st2.top()) {
            flag = false;
        }

        st1.pop();
        st2.pop();
    }

    if(flag) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
    return 0;
}