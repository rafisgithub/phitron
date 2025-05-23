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

void search_value(Node *head,int val){
    Node *temp = head;
    bool flag = false;
    while (temp!=NULL)
    {
        if(val == temp->val){
            flag  = true;
            break;
        }
        temp = temp->next;
    }
    
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
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

    int x;
    cin >> x;
    search_value(head,x);
    
    return 0;
}