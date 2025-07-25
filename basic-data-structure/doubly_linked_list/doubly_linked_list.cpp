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
int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    a->prev = head;

    b->next = c;
    b->prev = a;

    while(head != NULL) {
        cout << head->val <<" ";
        head = head->next;
    }
    
    return 0;
}