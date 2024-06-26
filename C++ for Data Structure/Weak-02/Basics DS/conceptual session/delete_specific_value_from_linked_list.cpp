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

void insert_at_tail(Node *&head, Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

void print_linked_list(Node *head){
   
   Node *temp = head;

    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

}
void delete_spacific_value(Node *&head,int val){
   if(head->val == val){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    return;
   }
   Node *temp = head;

    while (temp->next!=NULL)
    {
        if(temp->next->val == val){
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
            break;
        }
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
        if(val==-1) break;

        insert_at_tail(head,tail,val);
    }

    int x;
    cin >> x;
    
    delete_spacific_value(head,x);
    print_linked_list(head);
    
    return 0;
}