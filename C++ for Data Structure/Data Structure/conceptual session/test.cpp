#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node *next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void build_linked_list(Node *&head, Node *&tail, int val){

    cout<<head<<endl;
    
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    cout<<&head<<endl;

   build_linked_list(head,tail,10);

    return 0;
}