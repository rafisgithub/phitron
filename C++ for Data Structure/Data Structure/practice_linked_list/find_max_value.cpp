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

void build_linked_list(Node *&head, Node *&tail, int val){

    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}


void find_max_value(Node *head){
    Node *temp = head;
    int max_value = head->val;
    while (temp!=NULL)
    {
        if(temp->val>max_value){
            max_value = temp->val;
        }
        temp = temp->next;
    }
    
    cout << max_value << endl;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int val;
        cin>>val;
        if(val==-1) break;

      build_linked_list(head,tail,val);
    }

    find_max_value(head);
    
    return 0;
}