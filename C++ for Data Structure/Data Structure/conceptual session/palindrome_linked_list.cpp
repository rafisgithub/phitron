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

void is_palindrome(Node *head){
    vector<int> v;
    Node *temp = head;

  
    while (temp!=NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }

    vector<int> r;
    r = v;

    reverse(r.begin(),r.end());

    if(v==r){
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

    is_palindrome(head);
    
    return 0;
}