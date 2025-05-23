#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void build_linked_list(Node *&head, Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

void print_linked_list_in_reverse_order(Node *head){
   
    if(head==NULL){
        return;
    }
    print_linked_list_in_reverse_order(head->next);
    
     cout<<head->val<<" ";
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;

        build_linked_list(head,tail,val);
    }

    print_linked_list_in_reverse_order(head);
    
    return 0;
}