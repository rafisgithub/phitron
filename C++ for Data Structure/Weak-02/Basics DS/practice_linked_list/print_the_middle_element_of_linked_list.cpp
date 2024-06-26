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
int size_of_linked_list(Node *head){
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}

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

   int size = size_of_linked_list(head);


   if(size%2==0){

    Node *temp = head;

    for (int i = 1; i <=(size/2)-1; i++)
    {
        temp = temp->next;
    }
    cout<<temp->val<<" "<<temp->next->val<<endl;
    
   }else{
        Node *temp = head;
        for (int i = 1; i < size/2; i++)
        {
            temp = temp->next;
        }
        cout<<temp->next->val;
   }
    

    return 0;
}