#include<bits/stdc++.h>
using namespace std;

class Node {
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

void printForward(Node* head) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node* tail) {
    cout << "R -> ";
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAt(Node* &head, Node* &tail, int index, int value, int &size) {
    if (index < 0 || index > size) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newNode = new Node(value);
    
    if (size == 0) {
        head = newNode;
        tail = newNode;
    } else if (index == 0) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    } else if (index == size) {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    } else {
        Node* temp = head;
        for (int i = 0; i < index - 1; ++i) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
    size++;
    printForward(head);
    printBackward(tail);
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;
    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;
        insertAt(head, tail, x, v, size);
    }

    return 0;
}