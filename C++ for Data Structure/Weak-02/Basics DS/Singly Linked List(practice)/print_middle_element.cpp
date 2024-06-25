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

void buil_linked_list(Node *&head,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
    }else{
        Node *temp = head;

        while (temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        
    }
}

void find_middle_valu(Node *head){
    Node *temp  = head;
    int counter = 0;

    while (temp!=NULL){
        counter++;
        temp = temp->next;
    }

    temp = head;

    if(counter%2==0){
        int i = 1;
        while (i<counter/2)
        {
            temp = temp->next;
            i++;
        }
        cout<<temp->val<<" "<<temp->next->val;
        
    }else{
        int i = 1;
        while (i<=counter/2)
        {
           temp = temp->next;
           i++;
        }
        cout<<temp->val<<endl;

        
    }
    
}
int main(){
    
    Node *head = NULL;

    while (true)
    {
       int val;
       cin>>val;
       if(val==-1) break;

       buil_linked_list(head,val);
    }

    find_middle_valu(head);
    
    return 0;
}