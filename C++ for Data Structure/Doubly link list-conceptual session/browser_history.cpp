#include <bits/stdc++.h>
using namespace std;

class BrowserHistory {
public:
    class Node {
    public:
        string data;
        Node* next;
        Node* prev;

        Node(string data) {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    Node* current;

    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    
    string back(int steps) {
        while (steps > 0 && current->prev != NULL) {
            current = current->prev;
            steps--;
        }
        return current->data;
    }
    
    string forward(int steps) {
        while (steps > 0 && current->next != NULL) {
            current = current->next;
            steps--;
        }
        return current->data;
    }
};


