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

void print_given_level_value_left_to_right(Node* root, int given_level) {
    
    if (root == NULL) {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});
    bool level_found = false;

    while (!q.empty()) {
        pair<Node*, int> pr = q.front();
        Node* f = pr.first;
        int f_level = pr.second;
        q.pop();

        if (f_level == given_level) {
            cout << f->val << " ";
            level_found = true;
        }

        if (f->left != NULL) {
            q.push({f->left, f_level + 1});
        }

        if (f->right != NULL) {
            q.push({f->right, f_level + 1});
        }
    }

    if (!level_found) {
        cout << "Invalid" << endl;
    }
}

int main() {
    Node* root = input_binary_tree();

    int given_level;
    cin >> given_level;

    print_given_level_value_left_to_right(root, given_level);

    return 0;
}
