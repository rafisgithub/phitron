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

void find_min_max(Node *head){
    Node *temp = head;
    int min = INT_MAX;
    int max = INT_MIN;

    while (temp!=NULL)
    {
       if(temp->val<min){
        min = temp->val;
       }

       if(temp->val > max){
        max = temp->val;
       }
       temp = temp->next;
    }
    int get_diff = max - min;
    cout<<get_diff<<endl;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
       int val;
       cin >> val;

       if(val == -1) break;

       build_linked_list(head,tail,val);
    }
    
    find_min_max(head);
    return 0;
}