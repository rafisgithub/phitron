#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
};

void insert_at_tail(Node* &head,int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node* head){
    while(head != NULL) {
        cout << head->val <<" ";
        head = head->next;
    }
}


int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;
    print_linked_list(head);

    insert_at_tail(head,100);
    print_linked_list(head);


    return 0;
}