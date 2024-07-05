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

void build_linked_list(Node *&head, Node *&tail, int val){

    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}


void sort_in_descending_order(Node *head){
    Node *temp = head;

    for (Node * i = temp; i->next!=NULL; i = i->next)
    {
        for (Node *j = i->next; j!=NULL; j = j->next)
        {
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }
        
    }
    temp = head;
    while (temp!= NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
    
    
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int val;
        cin>>val;
        if(val==-1) break;

      build_linked_list(head,tail,val);
    }

    sort_in_descending_order(head);
    
    return 0;
}