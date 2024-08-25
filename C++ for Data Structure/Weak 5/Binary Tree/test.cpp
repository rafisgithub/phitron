#include <bits/stdc++.h>

using namespace std;

class Node{
public:
int val;
Node* left;
Node* right;

Node(int val){
    this->val = val;
    this->left = NULL;
    this->right = NULL;
}

};

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1)   root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myRight;

        if(l == -1)  myleft = NULL;
        else myleft = new Node(l);
        if(r == -1)  myRight = NULL;
        else myRight = new Node(r);

        f->left = myleft;
        f->right  = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
   
        return root;
}

void traversal_of_binary_tree(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
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

    traversal_of_binary_tree(root);
    return 0;
}