#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;

        Node(int val) {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* input_binary_tree() {
    int val;
    cin >> val;

    Node* root;

    if(val == -1) {
       root = NULL;
    }else {
        Node* root = new Node(val);
    }

    queue<Node*> q;
    q.push(root);

}
int main() {

    Node* root = input_binary_tree();

    return 0;
}