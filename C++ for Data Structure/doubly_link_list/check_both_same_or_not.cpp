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

void build_doubly_link_list1(Node *&head, Node *&tail, int val){

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
void build_doubly_link_list2(Node *&head, Node *&tail, int val){

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

void print_link_list(Node *head){
    Node *temp = head;

    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp = temp->next;
    }
    
    cout<<endl;
}

void check_both_same_or_not(Node *head1, Node *head2){
    int flag = true;
    while (head1!=NULL || head2!=NULL)
    {
        if(head1->val != head2->val){
            flag = false;
            break;
        }
        head1 = head1->next;
        head2 = head2->next;
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
        cin>>val1;
        if(val1 == -1) break;

        build_doubly_link_list1(head1,tail1,val1);
    }
    //  print_link_list(head1);
    while (true)
    {
        int val2;
        cin>>val2;
        if(val2 == -1) break;

        build_doubly_link_list2(head2,tail2,val2);
    }
    
    // print_link_list(head1);
    check_both_same_or_not(head1,head2);
    return 0;
}