#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next  = NULL;
        }
};

void build_linked_list1(Node* &head1, Node* &tail1, int val) {
    Node* newNode = new Node(val);

    if(head1 == NULL){
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->next = newNode;
    tail1 = newNode;
}

void build_linked_list2(Node* &head2, Node* &tail2, int val) {
    Node* newNode = new Node(val);

    if(head2 == NULL){
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    tail2 = newNode;
}


void check_similarity(Node* head1,Node* head2){
    bool flag = true;

    while(head1 != NULL && head2 != NULL){
        if(head1->val != head2->val) {
            flag = false;
            break;
        }else{
            head1 = head1->next;
            head2 = head2->next;
        }
    }

    if(flag)
        cout <<"YES\n";
    else
        cout <<"NO\n";
}


int main() {

 
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int len1 = 0;
    int len2 = 0;

    while(1) {
        int val;
        cin >> val;

        if(val == -1)
            break;
        
        len1++;
        
        build_linked_list1(head1,tail1,val);
    }

    while(1) {
        int val;
        cin >> val;

        if(val == -1)
            break;
        
        len2++;
        
        build_linked_list2(head2,tail2,val);
    }

    if(len1 != len2){
        cout << "NO\n";
        return 0;
    }

    check_similarity(head1,head2);


    return 0;
}