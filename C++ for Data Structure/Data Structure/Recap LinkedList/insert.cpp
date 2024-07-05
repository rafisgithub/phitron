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

void printf_linked_list(Node *head){
    while (head!=NULL)
    {
        cout<<head->val<<" ";
       head = (*head).next;
    }
    cout<<endl;
    
}

void insert(Node *head,int pos,int val){
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int size(Node *head){
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}

void insert_at_head(Node *&head,int val){
    Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    
}
void insert_at_tail(Node *&head,Node *tail,int val){
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}
int main(){

    // Node a,b;
    // a.val = 10;
    // b.val = 20;
    // a.next = &b;

   Node *head = new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);
   Node *c = new Node(40);
   Node *d = new Node(50);
   Node *tail = d;

   head->next = a;
   a->next = b;
   b->next = c;
   c->next = d;

    printf_linked_list(head);

    int pos,val;
    cin>>pos>>val;

    if(pos>size(head)){
        cout<<"Invalid\n";
    }else if(pos == 0){
        insert_at_head(head,val);
    }else if(pos == size(head)){
        insert_at_tail(head,tail,val);
    }else{
    insert(head,pos,val);
    }

   printf_linked_list(head);

    return 0;
}