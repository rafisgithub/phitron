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

void build_linked_list(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void search_index(Node* head ,int val) {

    
    Node* temp = head;

    int index = 0;

    bool flag =  false;

    while(temp != NULL) {
        
       if(temp->val != val){
            temp = temp->next;
            index++;

       }else{
            flag = true;
            break;
       }
    }

    if(flag){
        cout << index << endl;
    }else{
        cout <<"-1" <<endl;
    }
}

int main() {

    int t;
    cin >> t;

    while(t--) {

    Node* head = NULL;
    Node* tail = NULL;

    while(1) {
        int val;
        cin >> val;

        if(val == -1)
            break;
        
        build_linked_list(head,tail,val);
    }
    int searching_val;
    cin >> searching_val;


    search_index(head,searching_val);
}

    return 0;
}