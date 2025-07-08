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


void insert_at_any_pos(Node* &head, int pos, int val) {

    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i = 1;i<pos;i++){
        temp = temp->next;
    }

    // cout << temp->val;

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

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

    insert_at_any_pos(head,1,100);

    print_forward(head);
    cout << endl;
    print_backward(tail);
    cout << endl;


    return 0;
}