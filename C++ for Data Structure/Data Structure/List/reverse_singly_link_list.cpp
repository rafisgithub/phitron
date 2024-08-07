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

void build_linked_list(Node *&head, Node *&tail, int val){
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

void print_linked_list(Node *head){
    Node *temp = head;

    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp = temp->next;
    }
    cout<<endl;
}

void reverse_link_list(Node *&head,Node *cur){
   if(cur->next == NULL){
    head = cur;
    return;
   }

   reverse_link_list(head,cur->next);

   cur->next->next = cur;
   cur->next = NULL;

}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
       int val;
       cin >> val;

       if(val == -1) break;

       build_linked_list(head,tail,val);
    }
    
    print_linked_list(head);

    reverse_link_list(head,head);
    
   print_linked_list(head);
    return 0;
}