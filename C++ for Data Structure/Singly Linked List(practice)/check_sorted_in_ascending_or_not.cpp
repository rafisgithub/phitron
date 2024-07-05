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

void build_linked_list(Node *&head,int val){
    Node *newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
};
void check_ascending_or_not(Node *head){

    Node *temp = head;
    bool flag =true;

    while (temp->next != NULL)
    {
       if(temp->val > temp->next->val){
        flag = false;
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

    while (true)
    {
       int val;
       cin>>val;
       if(val == -1) break;

       build_linked_list(head,val);
    }
    
    check_ascending_or_not(head);

    return 0;
}