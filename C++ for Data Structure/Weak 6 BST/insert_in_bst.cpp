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

Node* input()
{
    int val;
    cin >> val;

    Node* root;

    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;

    q.push(root);

    while(!q.empty())
    {
        Node* root = q.front();

        q.pop();

        int l,r;

        cin >> l >> r ; 

        Node* myLeft;
        Node* myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        root->left = myLeft;
        root->right = myRight;

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
        
        
    }
    return root;
}

void insert(Node* &root,int x)
{
    if(root == NULL){
        root = new Node(x);
        return;
    }
    if(x < root->val){
        if(root->left == NULL){
            root->left = new Node(x);
        }else{
            insert(root->left,x);
        }
    } else{
        if(root->right == NULL){
            root->right = new Node(x);
        } else{
            insert(root->right,x);
        }
    }
}

void level_order(Node* root)
{
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* root = q.front();
        q.pop();

        cout << root->val <<" ";

        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }
    

}
int main(){
    Node* root = input();
    
    int x;
    cin >> x;

    insert(root,x);

   level_order(root);
    

    return 0;
}