#include <bits/stdc++.h>

using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val ;
        this->left = NULL;
        this->right = NULL ;
    }
};

Node* input_tree()
{
    int val ;
    cin >> val ;

    Node* root;

    if(val == -1) root == NULL;
    else root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* root = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        Node* myLeft;
        Node* myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        root->left = myLeft;
        root->right  = myRight;

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);

    }

    return root;
}

void level_order_traversal(Node* root)
{
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val <<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    


}
int main(){
    Node* root = input_tree();

    level_order_traversal(root);
    return 0;
}