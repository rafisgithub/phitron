#include<bits/stdc++.h>

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

void insert_into_head(Node *&head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_into_tail(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete_from_any_pos(Node *&head, int pos) {
    if (head == NULL || pos == 0) {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos; i++) {
        if (temp->next == NULL) {
            // Position is out of bounds
            return;
        }
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    if (deleteNode != NULL) {
        temp->next = deleteNode->next;
        delete deleteNode;
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

int size_of_linked_list(Node *head) {
    Node *temp = head;
    int counter = 0;
    while (temp != NULL) {
        counter++;
        temp = temp->next;
    }
    return counter;
}

int main() {
    Node *head = NULL;
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x == 0) {
            insert_into_head(head, y);
            print_linked_list(head);
        } else if (x == 1) {
            insert_into_tail(head, y);
            print_linked_list(head);
        } else if (x == 2) {
            if (y >= size_of_linked_list(head)) {
                print_linked_list(head);
            } else {
                delete_from_any_pos(head, y);
                print_linked_list(head);
            }
        }
    }

    return 0;
}
