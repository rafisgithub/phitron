#include <bits/stdc++.h>
using namespace std;

vector<int> v;

class Node {
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

    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;

    if (root) q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* my_left;
        Node* my_right;

        if (l == -1) my_left = NULL;
        else my_left = new Node(l);

        if (r == -1) my_right = NULL;
        else my_right = new Node(r);

        f->left = my_left;
        f->right = my_right;

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
    return root;
}

void push_left_subtree_outer_node_val(Node* root) {

    if (root == NULL) return;

      if (root->left) {
        push_left_subtree_outer_node_val(root->left);
        v.push_back(root->val);
    } 
    else if (root->right) {
        
        push_left_subtree_outer_node_val(root->right);
        v.push_back(root->val);
    } 
    else {
        v.push_back(root->val);
    }
}

void push_right_subtree_outer_node_val(Node* root) {
    if (root == NULL) return;

    if (root->right) {
        v.push_back(root->val);
        push_right_subtree_outer_node_val(root->right);
    } 
    else if (root->left) {
         v.push_back(root->val);
        push_right_subtree_outer_node_val(root->left);
       
    } 
    else {
        v.push_back(root->val);
    }
}

void print_outer_tree(Node* root) {

    if (root == NULL) return;

    if (root->left) {
        push_left_subtree_outer_node_val(root->left);
    }

    v.push_back(root->val);

    if (root->right) {
        push_right_subtree_outer_node_val(root->right);
    }

    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {

    Node* root = input_binary_tree();

    print_outer_tree(root);

    return 0;
}
