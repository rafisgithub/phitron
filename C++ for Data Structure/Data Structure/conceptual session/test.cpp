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

void search_val(Node *head,int val){
    Node *temp = head;
    bool flag = false;
    while (temp!=NULL)
    {
       if(temp->val == val){
        flag = true;
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
       cin >> val;

       if(val == -1) break;

       build_linked_list(head,tail,val);
    }
    // search_val(head);
    int val;
    cin >> val;
    search_val(head,val);
    return 0;
}