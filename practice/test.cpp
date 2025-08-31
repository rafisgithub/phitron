#include<bits/stdc++.h>

using namespace std;

class Node {

    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val) {

            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};


class MyStack{
    public:
        Node* head = NULL;
        Node* tail = NULL;

        int sz = 0;

        void push(int val) {
            sz++;
            Node* newNode = new Node(val);

            if(head == NULL) {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        void pop() {

            sz--;
            tail = tail->prev;
            if(tail == NULL) {
                head == NULL;
            }
            Node* deleteNode = tail;
            delete deleteNode;

        }

        int size() {
            return sz;
        }

        int top() {
            return tail->val;
        }


        bool empty() {
            if(sz == 0)
                return true;
            else
                return false;
        }   
};
int main() {

    MyStack st;

    st.push(10);

     
    return 0;
}