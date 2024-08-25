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


int calculate_depth(Node* root) {
    int depth = 0;
    while (root != NULL) {
        depth++;
        root = root->left;
    }
    return depth;
}

bool is_perfect_tree(Node* root, int depth, int level = 1) {
    if (root == NULL) return true;

    if (root->left == NULL && root->right == NULL)
        return depth == level;

    if (root->left == NULL || root->right == NULL)
        return false;

    return is_perfect_tree(root->left, depth, level + 1) && is_perfect_tree(root->right, depth, level + 1);
}

void check_binary_tree_is_it_perfect_or_not(Node* root) {
    int depth = calculate_depth(root);
    if (is_perfect_tree(root, depth))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {

    Node* root = input_binary_tree();

    check_binary_tree_is_it_perfect_or_not(root);

    return 0;
}
