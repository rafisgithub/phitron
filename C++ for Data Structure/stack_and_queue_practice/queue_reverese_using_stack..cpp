#include<bits/stdc++.h>

using namespace std;

class MyQueue{
    public:
        list<int> q;

        void push(int val) {
            q.push_back(val);
        }
        
        void pop() {
            q.pop_front();
        }

        int front() {
            return q.front();
        }

        int size() {
            return q.size();
        }

        bool empty() {
            if(q.size() == 0) {
                return true;
            }else{
                return false;
            }
        }
};

int main() {
    MyQueue q1;

    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        int val;
        cin >> val;
        q1.push(val);
    }


    stack<int> s;

    while(!q1.empty()) {
        s.push(q1.front()); 
        q1.pop();
    }


    MyQueue q2;

    while(!s.empty()) {
        q2.push(s.top());
        s.pop();
    }

    while(!q2.empty()) {
        cout << q2.front() << " ";  
        q2.pop();
    }
    
    return 0;
}
