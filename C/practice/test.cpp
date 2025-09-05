#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* prev;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;

        }
};


void build_Linked_list(int val, Node* &head, Node* &tail) {

    // cout << &head << endl;
    // cout << &tail << endl;

    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}


void print_l(Node* head) {
   Node* temp = head;

   while(temp != NULL) {
    cout << temp->val <<" "; 
    temp = temp->next;
  }
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    // cout << &head << endl;
    int val;

    while(1) {
        cin >> val;
        if(val == -1){
            break;
        }

        build_Linked_list(val,head,tail);
    }

    print_l(head);
    return 0;
}