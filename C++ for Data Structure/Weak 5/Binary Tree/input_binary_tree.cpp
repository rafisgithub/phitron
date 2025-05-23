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


void level_order(Node* root){
    if(root == NULL) 
    {
        cout<<"Tree nai\n";
        return;
    }
     queue<Node*> q;

     q.push(root);

     while(!q.empty())
     {
        // 1. ber kore ana
        Node* f = q.front();
        q.pop();

        //2 .jobtio ja kaj ase
        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
         
     }
}

int main(){
    Node* root = input_tree();
    level_order(root);

    return 0;
}