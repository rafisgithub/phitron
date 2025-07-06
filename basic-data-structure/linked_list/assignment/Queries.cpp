#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next  = NULL;
        }
};

int len = 0;

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
        
    }
    len++;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    
    if(tail == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    len++;
}

void delete_from_any_pos(Node* &head, Node* &tail, int pos) {
    if(pos == 0) {
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL) {
            tail = NULL;
        }
        delete deleteNode;
    } else {
        Node* temp = head;
        for(int i = 1; i < pos; i++) {
            temp = temp->next;
        }
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        if(temp->next == NULL) {
            tail = temp;
        }
        delete deleteNode;
    }
    len--;
}

void print_the_linked_list(Node* head) {
    while(head!=NULL){
        cout << head->val <<" ";
        head = head->next;
    }
}

int main() {
    int t;
    cin >> t;

    Node* head = NULL;
    Node* tail = NULL;

    while(t--) {
        int op, val;
        cin >> op >> val;

        if(op == 0) {
            insert_at_head(head, tail, val);
            print_the_linked_list(head);
        } else if(op == 1) {
            insert_at_tail(head, tail, val);
            print_the_linked_list(head);
        } else if(op == 2) {
            if(val >= 0 && val < len) {
                delete_from_any_pos(head, tail, val);
                print_the_linked_list(head);
            }else{
                print_the_linked_list(head);
            }
        }
        cout << endl;
    }



    return 0;
}