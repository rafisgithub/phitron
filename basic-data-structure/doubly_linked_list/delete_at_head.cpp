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

void print_forward(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val <<" ";
        temp = temp->next;
    }
}

void print_backward(Node* tail) {
    Node* temp = tail;

    while(temp != NULL) {
        cout << temp->val <<" ";
        temp = temp->prev;
    }

}


void delete_at_head(Node* &head, Node* &tail) {

    Node* deleteNode = head;

    head = head->next;
    delete deleteNode;

    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;

}


int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = b;
    a->prev = head;

    b->next = tail;
    b->prev = a;

    tail->prev = b;

    delete_at_head(head, tail);

    print_forward(head);
    cout << endl;
    print_backward(tail);
    cout << endl;


    return 0;
}