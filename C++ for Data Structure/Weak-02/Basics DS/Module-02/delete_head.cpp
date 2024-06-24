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

void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        cout << "\nInserted at head\n\n";
        return;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // temp is now at the last node
    temp->next = newNode;
    cout << "\nInserted at tail\n\n";
}

void print_linked_list(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}

void insert_at_any_pos(Node *&head, int pos, int v) {
    Node *newNode = new Node(v);

    if (pos == 0) { // Insert at head
        newNode->next = head;
        head = newNode;
        cout << "Inserted at position 0 (head)" << endl << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos; i++) {
        if (temp == NULL || temp->next == NULL) {
            cout << "Position out of bounds" << endl << endl;
            return;
        }
        temp = temp->next;
    }

    // Now temp is at (pos-1)th node
    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Inserted at position " << pos << endl << endl;
}

void delete_from_any_position(Node *head,int pos)
{
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    delete deleteNode;
    cout<<"Delelte position "<<pos<<endl<<endl;

    
}

void delete_head(Node *&head){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    cout<<"Deleted head\n";
}
int main() {
    Node *head = NULL;

    while (true) {
        cout << "Option 1: Insert at tail\n";
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any position\n";
        cout << "Option 4: Delete node from any position\n";
        cout << "Option 5: Delete Head\n";
        cout << "Option 6: Exit" << endl;

        int op;
        cin >> op;

        if (op == 1) {
            cout << "Enter a value\n";
            int val;
            cin >> val;

            insert_at_tail(head, val);
        } else if (op == 2) {
            print_linked_list(head);
        } else if (op == 3) {
            int pos, v;
            cout << "Enter position\n";
            cin >> pos;
            cout << "Enter value\n";
            cin >> v;

            insert_at_any_pos(head, pos, v);
        } else if(op==4){
            int pos;
            cin>>pos;
            cout<<"Enter position\n";
            delete_from_any_position(head,pos);
        }else if(op==5){
            delete_head(head);
        }
        else if (op == 6) {
            break;
        } else {
            cout << "Invalid\n";
        }
    }

    return 0;
}
