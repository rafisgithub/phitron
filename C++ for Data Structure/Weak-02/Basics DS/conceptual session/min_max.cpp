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

void insert_at_tail(Node *&head, Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

void min_max(Node *head){
   

    int min = INT_MAX;
    int max = INT_MIN;
   Node *temp = head;

    while (temp!=NULL)
    {
        if(temp->val<min){
            min = temp->val;
        }
        if(temp->val>max){
            max = temp->val;
        }
        temp = temp->next;
    }

    cout<<min<<" "<<max<<endl;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;

        insert_at_tail(head,tail,val);
    }

    min_max(head);
    
    return 0;
}