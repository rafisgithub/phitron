#include <bits/stdc++.h>

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

void build_linked_list(Node* &head, int val){
    Node* newNode = new Node(val);
    // cout<<head<<endl;
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void print_list(Node* head){
    cout<<"List  : ";
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

void insert_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == 0){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, int val){
    Node* newNode = new Node(val);

    Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void Insert_at_any_pos(Node* &head, int val, int pos){
    Node* newNode = new Node(val);

    if(pos == 0){
        insert_at_head(head,val);
    }else{
        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    for(int i = 0; i<pos-1;i++){

    }
    
}
int size_of_link_list(Node* head){
    int count = 0;
    while(head!=NULL){
         head = head->next;
        count++;
    }

    return count;
}

void delete_from_head(Node* &head){
    if(head == 0) return;
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_from_tail(Node* &head){
    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    // cout<<temp->val<<endl;

    Node* deleteNode = temp->next;
    delete deleteNode;
    temp->next = NULL;

}

void delete_from_any_position(Node* head, int pos){
    if(pos == 0){
        delete_from_head(head);
        return;
    }
    Node* temp = head;

    for(int i=0;i<pos-1;i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main(){
    Node *head = NULL;
    
    
    while (1)
    {
    cout<<"1: create node\n";
    cout<<"2. Insert at head\n";
    cout<<"3. Insert at tail\n";
    cout<<"4. size of link\n";
    cout<<"5. Delete from head\n";
    cout<<"6. Delete from tail\n";
    cout<<"7. Delete from any position\n";
    cout<<"8 .Print list\n";
    cout<<"9. exit\n";

    int op;
    cin>>op;

    int val;


    switch (op)
    {
    case 1:
        while (1)
        {
           cin>>val;
           if(val == -1) break;;
            build_linked_list(head,val);
        }
        
        break;
    
    case 2:
        cin>>val;
        insert_at_head(head,val);
        break;
    case 3:
        cin>>val;
        insert_at_tail(head,val);
        break;

    case 4:
        int pos;
        cin>>pos>>val;

        if(size_of_link_list(head) < pos){
            cout<<"Invalid Input\n";
            break;
        }
        Insert_at_any_pos(head,val,pos);
        break;
    case 5:
        if(size_of_link_list(head) == 0){
            cout<<"Out of bounds\n";
            break;
        }
        delete_from_head(head);
        break;
    case 6:
        delete_from_tail(head);
        break;
    
    case 7:
        cin>>pos;
        delete_from_any_position(head,pos);
        break;
    case 8:
        print_list(head);
        break;

    case 9:
        return 0;
        
    default:
        cout<<"Invalid option\n";
        break;
    }
    }
    
    return 0;
}