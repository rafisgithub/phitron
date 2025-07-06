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

void find_max_min_diff(Node* head) {

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    Node* temp = head;

    while(temp != NULL) {
        if(temp->val > max_val){
            max_val = temp->val;
        }

        if(temp->val < min_val) {
            min_val = temp->val;
        }
        temp = temp->next;
    }

    cout << max_val - min_val <<endl;
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

    find_max_min_diff(head);

    return 0;
}