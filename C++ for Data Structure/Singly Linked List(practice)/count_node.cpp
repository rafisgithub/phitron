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
void create_linked_List(Node *&head,int v){
    Node *newNode = new Node(v);
    if(head==NULL){
        head=newNode;
    }else{
        
    Node *temp = head;

    while (temp->next!=NULL)
    {
       temp = temp->next;
    }

    temp->next = newNode;
    }

    
}

void count_node(Node *head){
    
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL)
    {
        // cout<<temp->val<<" ";
        counter++;

        temp = temp->next;
    }

    cout<<counter<<endl;
    
}
int main(){
   Node *head = NULL;

   while (true)
   {
    int val;
    cin>>val;
    if(val==-1) break;;

    create_linked_List(head,val);
   }
   count_node(head);
    return 0;
}