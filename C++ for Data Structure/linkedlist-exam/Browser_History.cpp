#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        string val;
        Node* next;
        Node* prev;

        Node(string val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void build_list(Node* &head, Node* &tail, string val) {
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

void browser_history(Node* &current, string cmd) {

    if(cmd == "next") {
        if(current->next != NULL) {
            current = current->next;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    } else if(cmd == "prev") {
        if(current->prev != NULL) {
            current = current->prev;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    } else {
        Node* temp = current;
        if(temp->val == cmd) {
            cout << temp->val << endl;
            return;
        }
        while(temp != NULL && temp->val != cmd) {
            temp = temp->next;
        }
        
        if(temp == NULL) {
            temp = current;
            while(temp != NULL && temp->val != cmd) {
                temp = temp->prev;
            }
        }
        
        if(temp != NULL && temp->val == cmd) {
            current = temp;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
}


int main() {

    Node* head = NULL;
    Node* tail = NULL;

    while(1) {
        string name;
        cin >> name;
        if(name == "end"){
            break;
        }
        build_list(head,tail,name);
    }
    
    int q;
    cin >> q;
    cin.ignore();
    while(q--) {
        string cmd;
        getline(cin,cmd);

        if(cmd[0] == 'v') {
            stringstream ss(cmd);
            string no_need;
            ss >> no_need >> cmd;
        }
        browser_history(head, cmd);
    }
    return 0;
}