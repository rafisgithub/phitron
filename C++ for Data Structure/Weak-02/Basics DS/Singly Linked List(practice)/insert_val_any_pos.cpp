#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node *next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void build_linked_list(Node *&head,int val){
    Node *newNode = new Node(val);
   
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    
    
}
void printf_linked_list(Node *head){
    Node *temp = head;

    while (temp!= NULL)
    {
       cout<<temp->val<<" ";
       temp = temp->next;
    }
    cout<<endl;
    
}

void insert_at_any_position(Node *&head,int pos,int val){
    Node *newNode = new Node(val);

    if(pos == 0){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
       if(temp==NULL || temp->next==NULL){
         cout<<"Invalid\n";
         delete newNode;
         return;
       }
       temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
   
}
int main(){
    Node *head = NULL;

    while (true)
    {
       int val;
       cin>>val;

       if(val==-1) break;

       build_linked_list(head,val);
    }
    
    
    int q;
    cin>>q;
    while (q--)
    {
      int pos,val;
      cin>>pos>>val;
      insert_at_any_position(head,pos,val);
      printf_linked_list(head);
    }
   
     printf_linked_list(head);

    return 0;
}