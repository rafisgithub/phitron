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

void build_linked_list1(Node *&head1, Node *&tail1, int val1){
    Node *newNode = new Node(val1);

    if(head1 == NULL){
        head1 = newNode;
        tail1 = newNode;
        return;
    }else{
        tail1->next = newNode;
        tail1 = newNode;
    }
}
void build_linked_list2(Node *&head2, Node *&tail2, int val2){
    Node *newNode = new Node(val2);

    if(head2 == NULL){
        head2 = newNode;
        tail2 = newNode;
        return;
    }else{
        tail2->next = newNode;
        tail2 = newNode;
    }
}

void is_both_same_or_not(Node *&head1,Node *&head2){
    Node *temp1 = head1;
    Node *temp2 = head2;

    bool flag = true;
    while (temp1!=NULL && temp2!=NULL)
    {
       if(temp1->val != temp2->val){
        flag = false;
       }
       temp1 = temp1->next;
       temp2 = temp2->next;
    }

    if(temp1!=NULL || temp2!=NULL){
        flag = false;
    }
    
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main(){
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
       int val1;
       cin >> val1;

       if(val1 == -1) break;

       build_linked_list1(head1,tail1,val1);
    }

    while (true)
    {
       int val2;
       cin >> val2;

       if(val2 == -1) break;

       build_linked_list2(head2,tail2,val2);
    }
    
    is_both_same_or_not(head1,head2);
    return 0;
}