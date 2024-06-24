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

void insert_at_tail(Node *&head,int val){
    Node *newNOde = new Node(val);

    if(head==NULL){
        head = newNOde;
        return;
    }

    Node *temp = head;

    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    //temp is now at the last node
    temp->next = newNOde;
    
}

void print_linked_list(Node *head){
    Node *temp = head;

    while (temp != NULL)
    {
      cout<<temp->val<<" ";
      temp = temp->next;
    }
    cout<<endl;
    
}
int main(){

    Node *head = NULL;

    while (true)
    {
        cout<<"Option 1:INsert at tail\n";
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Exit" << endl;
        int op;
        cin>>op;
        if(op==1){
        cout<<"Enter a value\n";
        int val;
        cin>>val;
        insert_at_tail(head,val);
        }else if(op==2){
            print_linked_list(head);
        }else if(op==3){
            break;
        }else{
            cout<<"Invalid\n";
        }


    }
    



    

    return 0;
}