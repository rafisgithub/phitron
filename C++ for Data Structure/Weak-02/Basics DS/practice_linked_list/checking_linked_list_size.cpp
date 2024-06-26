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

void bulid_linked_list1(Node *&head1,Node *&tail1,int val){
    Node *newNode = new Node(val);
    if(head1==NULL){
        head1 = newNode;
        tail1 = newNode;
    }else{
        tail1->next = newNode;
        tail1 = newNode;
    }
}

void bulid_linked_list2(Node *&head2, Node *&tail2, int val ){
    Node *newNode = new Node(val);

    if(head2==NULL){
        head2 = newNode;
        tail2 = newNode;
    }else{
        tail2->next = newNode;
        tail2 = newNode;
    }
}
int linked_list_one_size1(Node *head){
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL)
    {
       counter++;
        temp = temp->next;
    }

   return counter;
    
}
int linked_list_one_size2(Node *head){
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL)
    {
       counter++;
        temp = temp->next;
    }

   return counter;
    
}


int main(){
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int size1;
    int size2;

    while (true)
    {
        int val1;
        cin>>val1;
        if(val1 == -1){
            break;
        }
       bulid_linked_list1(head1,tail1,val1);
 
    }


   size1 = linked_list_one_size1(head1);

      while (true)
    {
        int val2;
        cin>>val2;
        if(val2 == -1){
            break;
        }
       bulid_linked_list2(head2,tail2,val2);
 
    }
   size2 = linked_list_one_size2(head2);

   if(size1 == size2)
   cout<<"YES\n";
   else
   cout<<"NO\n";

    return 0;
}