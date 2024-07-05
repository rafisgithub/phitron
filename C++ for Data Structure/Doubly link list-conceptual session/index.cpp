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
int count_size = 0;

void inser_at_tail(Node *&head,int val){
    Node *newNode = new Node(val);
    count_size++;
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
        newNode->prev = temp;
    }
}

void print_list(Node *head){
    while (head!=NULL)
    {
    cout<<head->val<<" ";
    head = head->next;
    }
    cout<<endl;
}

void count_size_order_of_one(){
   
    cout<<count_size<<endl;
}

int main(){
    
    Node *head = NULL;
    while (1)
    {
        int val;
       cin>>val;

       if(val == -1) break;
       inser_at_tail(head,val);
    }

    print_list(head);

    count_size_order_of_one();


    return 0;
}