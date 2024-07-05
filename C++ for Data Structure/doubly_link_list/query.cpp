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

void build_doubly_link_list(Node *&head, Node *&tail, int pos, int val){

    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }else{
        if(pos == 0){
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }else if(pos == size_of_list(head)){

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        }else{
            Node *temp = head;

            for(int i=1;i<pos;i++){
                temp = temp->next;
            }

            newNode->next = temp->next;
      
            temp->next = newNode;
            newNode->prev = temp;
            
        }
    }
}

void print_link_list(Node *head){
    Node *temp = head;

    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp = temp->next;
    }
    
    cout<<endl;
}
void print_reverse(Node *tail){
    while (tail!=NULL)
    {
       cout<<tail->val<<" ";
       tail = tail->prev;
    }
    
}

int size_of_list(Node *head){
    Node *temp = head;
    int counter = 0;
    while (temp!=NULL)
    {
       counter++;
       temp = temp->next;
    }
    return counter;
}
int main(){

    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin>>t;

    while (t--)
    {

        int pos,val;
        cin>>pos>>val;
        if(pos > size_of_list(head)){
            cout<<"Invalid\n";
            continue;
        }
        build_doubly_link_list(head,tail,pos,val);
     
        print_link_list(head);
        print_reverse(tail);
    }
    
    

    return 0;
}