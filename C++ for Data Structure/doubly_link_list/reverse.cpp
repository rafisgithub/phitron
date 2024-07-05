#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void build_doubly_link_list(Node *&head, Node *&tail, int val){

    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void reverse(Node *head, Node *tail){
    Node *i = head;
    Node *j = tail;

    while (i!=j && i->next != j)
    {
        swap(i->val,j->val);

        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);
}

void print_linked_list(Node *head){
    Node *temp = head;
    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp = temp->next;
    }
    
}
int main(){

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin>>val;
        if(val == -1) break;

        build_doubly_link_list(head,tail,val);
    }
    
    reverse(head,tail);
    print_linked_list(head);
    return 0;
}