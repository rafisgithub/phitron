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
void delete_node(Node *head,int pos){
    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    
    Node *deleteNode = temp->next;

    temp->next = temp->next->next;
    delete deleteNode;
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

void delete_head(Node *&head){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main(){
    
   Node *head = new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);
   Node *c = new Node(40);
   Node *d = new Node(50);
   head->next = a;
   a->next = b;
   b->next = c;
   c->next = d;
   
printf_linked_list(head);

   int pos;
   cin>>pos;
   if(pos>=size(head)){
    cout<<"Invalid\n";
   }else if(pos==0){
    delete_head(head);
   }
   else{
       delete_node(head,pos);

   }

   printf_linked_list(head);

    return 0;
}