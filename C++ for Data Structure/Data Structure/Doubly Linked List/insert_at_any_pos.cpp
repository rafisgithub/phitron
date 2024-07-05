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

void print_normal(Node *head){
    Node *temp = head;

    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
void print_reverse(Node *tail){
    Node *temp = tail;

    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void insert_at_any_pos(Node *&head,int pos,int val){

    Node *newNode = new Node(val);

    Node *temp = head;

    for(int i=1;i<=pos-1;i++){
        temp = temp->next;
    }
    // cout<<temp->val;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;

}

int link_list_size(Node *head){
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL)
    {
       counter++;
       temp = temp->next;
    }
    return counter;
}

void insert_head(Node *&head,Node *&tail ,int val){

    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail  = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
}

void insert_at_tail(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(tail == NULL){
        tail = newNode;
        head = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int main(){
   Node * head = new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);
   Node *c = new Node(40);

   Node *tail = c;

   head->next = a;
   a->prev = head;

   a->next = b;
   b->prev = a;
   b->next = c;
   c->prev = b;

print_normal(head);
print_reverse(tail);
int pos,val;
cin>>pos>>val;

    if(pos == 0){
        insert_head(head,tail,val);
        
    }else if(pos == link_list_size(head)){
    
        insert_at_tail(head,tail,val);
    }
    else if(pos>=link_list_size(head)){
        cout<<"Invalid\n";
    }else{
    insert_at_any_pos(head,pos,val);
    }




print_normal(head);
print_reverse(tail);
    return 0;
}