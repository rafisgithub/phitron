// Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.


#include<bits/stdc++.h>

using namespace std;

class Mystack {
    public:
        vector<int> v;

        void push(int val) {
            v.push_back(val);
        }

        void pop() {
            v.pop_back();
        }

        int top() {
            return v.back();
        }

        int size() {
            return v.size();
        }


        bool empty() {
            if(v.size() == 0) {
                return true;
            }else{
                return false;
            }
        }


};
int main() {

    Mystack st;

    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    Mystack copyst;

    while(!st.empty()) {
        copyst.push(st.top());
        st.pop();
    }

    while(!copyst.empty()) {
        cout << copyst.top() << " ";
        copyst.pop();
    }
    
    return 0;
}