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
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){

        // 1.ber kore ano

        Node* p = q.front();
        q.pop();

        // 2.jabotiyo ja kaj ache
        int l,r;
        cin >> l >> r;

        Node* myleft;
        Node* myright;
        if(l == -1)
            myleft = NULL;
        else 
            myleft = new Node(l);
        if(r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;
        // 3. children gula ke push koro

        if(p->left) 
            q.push(p->left);
        if(p->right) 
            q.push(p->right);
    }

    return root;

}


int count_leaf(Node* root)
{
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l+r;
    }
}

int main(){

    Node* root = input_tree();

    count_leaf(root);
   

    return 0;
}