#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void build_linked_list(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void remove_duplicate_value(Node *head) {
    Node *i = head;

    while (i != NULL) {
        Node *j = i;
        while (j->next != NULL) {
            if (i->val == j->next->val) {
                Node *duplicateNode = j->next;
                j->next = j->next->next;
                delete duplicateNode;
            }else{
                j = j->next;
            }
        }
        i = i->next;
    }
}

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    while (true) {
        int val;
        cin >> val;

        if (val == -1) break;

        build_linked_list(head, tail, val);
    }

    remove_duplicate_value(head);
    print_linked_list(head);
    return 0;
}
