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

void build_doubly_link_list(Node *&head, Node *&tail, int val){

    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void check_palinrome_or_not(Node *head, Node *tail){
    
    Node *i = head;
    Node *j = tail;
    bool is_palindrome = true;
    while (i!=j && i->next != j)
    {
        if(i->val != j->val){
            is_palindrome = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
     if(i->val != j->val){
        is_palindrome = false;
        }
    if(is_palindrome){
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
        if(val == -1) break;

        build_doubly_link_list(head,tail,val);
    }
    
    check_palinrome_or_not(head,tail);
    return 0;
}