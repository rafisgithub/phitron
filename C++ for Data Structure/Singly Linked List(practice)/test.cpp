#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
};

void build_linked_list(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node* head) {
    while(head->next != NULL){
        cout << head->val << " ";
        head = head->next;
    }
}
int main() {

    Node* head = NULL;
    Node* tail = NULL;

    while(1) {
        int val;
        cin >> val;

        if(val == -1)
            break;
        
        build_linked_list(head,tail,val);
    }

    print_linked_list(head);
    return 0;
}