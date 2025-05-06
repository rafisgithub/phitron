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


void buildll(Node*& head,int val) {
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void printNode(Node* head){
    Node * temp = head;

    while(temp != NULL){
        cout << temp->val <<" ";
        temp = temp->next;
    }
    
}
int main() {

    Node* head = NULL;
 

    while(1){
        int n;
        cin>>n;
        if(n==-1){
            break;
        }
        buildll(head,n);

    }
    printNode(head);

    return 0;
}