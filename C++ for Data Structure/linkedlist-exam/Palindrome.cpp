#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void build_list(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

bool is_palindrome(Node* head,Node* tail) {

    bool flag = true;
    while(head != tail) {
        if(head->val != tail->val) {
            flag = false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return flag;
}
int main() {

    Node* head = NULL;
    Node* tail = NULL;

    while(1) {
        int val;
        cin >> val;

        if(val == -1) {
            break;
        }

        build_list(head,tail,val);
    }

    if(is_palindrome(head,tail)){
        cout <<"YES\n";
    }else{
        cout << "NO\n";
    }
    
    return 0;
}