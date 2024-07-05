#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void check_history(Node* &head, Node* &tail, Node* &current, string val) {
    if (val == "visit") {
        string address;
        cin >> address;
        Node *temp = head;
        bool found = false;
        while (temp != NULL) {
            if (temp->val == address) {
                current = temp;
                found = true;
                cout << current->val << endl;
                break;
            }
            temp = temp->next;
        }
        if (!found) {
            cout << "Not Available" << endl;
        }
    } else if (val == "next") {
        if (current != NULL && current->next != NULL) {
            current = current->next;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    } else if (val == "prev") {
        if (current != NULL && current->prev != NULL) {
            current = current->prev;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    Node *current = NULL;

    string val;

    while (true) {
        cin >> val;
        if (val == "end") break;

        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        string val;
        cin >> val;
        check_history(head, tail, current, val);
    }


    return 0;
}
