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

void build_linked_list(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicate_and_print(Node* head) {

    Node* i = head;

    while(i != NULL){

        Node* j = i;
        
        while(j->next != NULL) {
               
            if(i->val == j->next->val){
                Node* deleteNode = j->next;
                j->next = j->next->next;
                delete deleteNode;
            }else{
                j = j->next;
            }
        }
        i = i->next;
    }

    Node* temp = head;

    while(temp!=NULL) {
        cout << temp->val << " ";
        temp = temp->next;
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

        build_linked_list(head, tail, val);
    }
        
    remove_duplicate_and_print(head);

    return 0;
}