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

void build_linked_list(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}


int main() {

    int t;
    cin >> t;

    while(t--) {

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    cin >> val;

    if(val == 0){
        insert_at_head(head,val);
    }

   
}

    return 0;
}