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

bool search(Node* root, int x){
    if(root == NULL) return false;
    if(root->val == x) return true;

    if(x < root->val){
        // bool l = search(root->left,x);
        // if(l) return true;
        // else return false;
        return search(root->left,x);
    }else{
        return search(root->right,x);
    }
}
int main(){
    Node* root = input();

    if(search(root,100)) cout << "YES value found\n";
    else cout << "NO !!Not found\n";
    

    return 0;
}