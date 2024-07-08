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

class MyQueue{

    public:
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }
    }

    void pop(){
        Node *toDelete = head;
        head = head->next;
        delete
    }
};

int main(){
    
    return 0;
}