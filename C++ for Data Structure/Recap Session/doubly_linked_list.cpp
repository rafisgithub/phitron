#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }

};

void inset_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}
void inset_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail = newNode;
        return;
    }
   newNode->next = head;
   head->prev = newNode;
   head = newNode;

}

void print_normal(Node* head)
{
    Node *temp = head;

    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* head)
{
    Node *temp = head;

    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void insert_at_any_pos(Node* &head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;

}

void delete_from_head(Node* &head,Node* &tail)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
int main()
{
    Node* head = NULL;
    Node*tail = NULL;

    int val;
    while(1){
        cin>>val;
        if(val == -1) break;

        inset_at_tail(head,tail,val);
    }

    inset_at_head(head,tail,100);

    print_normal(head);
    print_reverse(tail);



    return 0;
}