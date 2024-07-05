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

void insert(Node *&head,int val)
{
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }else{
        Node *temp = head;

        while (temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        return;
        
    }
}

void printList(Node *temp){

    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
}

void insert_at_head(Node *&head,int val){
    Node * newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    newNode->next = head;

    head = newNode;
}

void insert_at_any_pos(Node *&head,int pos,int val){
    if(pos == 1){
        insert_at_head(head,val);
        return;
    }else{
        Node *newNode = new Node(val);
        Node *temp = head;

        for (int i = 1; i < pos; i++)
        {
           temp = temp->next;
        }

        newNode->next = temp->next;

        temp->next = newNode;
        
    }
}
int main(){
    Node *head = NULL;

    while (1)
    {
        int val;
        cin>>val;

        if(val == -1) break;

        insert(head,val);
        // insert_at_head(head,val);
    }
    printList(head);
    cout<<endl;

    int pos,val;

    cin>>pos>>val;

    insert_at_any_pos(head,pos,val);
    printList(head);
    cout<<endl;
    return 0;
}