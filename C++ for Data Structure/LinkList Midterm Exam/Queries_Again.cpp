#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

// void build_doubly_link_list(Node *&head, Node *&tail, int val){

//     Node *newNode = new Node(val);

//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }else{
//         tail->next = newNode;
//         newNode->prev = tail;
//         tail = newNode;
//     }
// }

int linked_list_size(Node *head){
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL)
    {
       counter++;
       temp = temp->next;
    }
    
   return counter;
}

void insert_at_head(Node *&head,Node *&tail ,int val){

    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail  = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
}

void insert_at_tail(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(tail == NULL){
        tail = newNode;
        head = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void insert_at_any_pos(Node *&head,int pos,int val){

    Node *newNode = new Node(val);

    Node *temp = head;

    for(int i=1;i<=pos-1;i++){
        temp = temp->next;
    }
    // cout<<temp->val;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;

}

void print_normal(Node *head){
    Node *temp = head;

    cout<<"L -> ";

    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

void print_reverse(Node *tail){
    Node *temp = tail;
    cout<<"R -> ";
    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    // while (true)
    // {
    //     int val;
    //     cin>>val;
    //     if(val == -1) break;

    //     build_doubly_link_list(head,tail,val);
    // }

    int t;
    cin>>t;
    while(t--){
        int x,v;
        cin>>x>>v;
        if(x>linked_list_size(head)){
            cout<<"Invalid\n";
        }else if(x == 0){
            insert_at_head(head,tail,v);
            print_normal(head);
            print_reverse(tail);
        }else if(x == linked_list_size(head)){
            insert_at_tail(head,tail,v);
            print_normal(head);
            print_reverse(tail);
        }else{
             insert_at_any_pos(head,x,v);
            print_normal(head);
            print_reverse(tail);
        }
    }
    
    linked_list_size(head);
    return 0;
}