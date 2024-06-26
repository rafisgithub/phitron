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

void build_linked_list(Node *&head,Node *&tail,int val){
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
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl<<endl;
}

void delete_node(Node *&head,Node *&tail,int pos){
    if(pos==0){
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }else{
        Node *temp = head;

        for (int i = 1; i < pos; i++)
        {
           temp = temp->next;
        }
        
        Node *deleteNode = temp->next;
        
        temp->next = temp->next->next;
        delete deleteNode;
        
    }
}

int size_of_linked_list(Node *head){
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL){
        counter++;
        temp = temp->next;
    }
    return counter;
}

void insert_at_any_pos(Node *&head,int pos,int val){
    Node *newNode =  new Node(val);
    if(pos == 0){
        newNode->next = head;
        head = newNode;
        return;
    }else{
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
    Node *tail = NULL;
    while (true)
    {
    again:
    cout<<"option 1:Buil LinkedList.\n";
    cout<<"option 2:Delete from any postion.\n";
    cout<<"option 3:Insert at any position\n";
    cout<<"option 3:Exit.\n";
    int op;
    cin>>op;
    if(op==1){
        while (true)
        {
        int val;
        cin>>val;
        if(val==-1) break;

        build_linked_list(head,tail,val);

        }
        print_linked_list(head);
    }else if(op==2){
        int pos;
        cin>>pos;
        if(pos>size_of_linked_list(head)){
            cout<<"Invalid position\n";
           goto again;
        }
        delete_node(head,tail,pos);
        print_linked_list(head);
    }else if(op == 3){
        int pos;
        int val;
        cin>>pos>>val;
        if(pos>size_of_linked_list(head)){
            cout<<"Invalid position\n";
            goto again;
        }
        insert_at_any_pos(head,pos,val);
        print_linked_list(head);
    }
    else{
        return 0;
    }

    }
    

    return 0;
}