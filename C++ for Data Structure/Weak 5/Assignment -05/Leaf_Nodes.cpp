#include <bits/stdc++.h>

using namespace std;

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

void print_the_values_of_leaf_nodes_in_descending(Node* root) {
    // if (root == NULL) return;
    if(!root) return;

    vector<int> v;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL) {
            
            v.push_back(f->val);
        }

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }

    
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main() {

    Node* root = input_binary_tree();

    print_the_values_of_leaf_nodes_in_descending(root);

    return 0;
}
