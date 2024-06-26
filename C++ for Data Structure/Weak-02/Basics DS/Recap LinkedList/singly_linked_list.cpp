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
    
}
int main(){

    // Node a,b;
    // a.val = 10;
    // b.val = 20;
    // a.next = &b;

   Node *head = new Node(10);
   Node *b = new Node(20);
   Node *c = new Node(30);
   Node *d = new Node(40);
   Node *e = new Node(50);

   head->next = b;
   b->next = c;
   c->next = d;
   d->next = e;

   printf_linked_list(head);


    return 0;
}