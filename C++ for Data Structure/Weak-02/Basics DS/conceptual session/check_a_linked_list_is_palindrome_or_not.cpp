#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node *next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void build_linked_list(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

void print_linked_list(Node *head){
    Node *temp = head;

    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp = temp->next;
    }
    
}

void check_palindrom(Node *head){
    Node *temp = head;

    vector<int> v;
    while (temp!=NULL)
    {
      v.push_back(temp->val);
      temp = temp->next;
    }

    vector<int> r;
    r = v;
    reverse(r.begin(),r.end());

    if(r==v){
        cout<<"palindrom\n";
    }else{
        cout<<"NO\n";
    }
    

}
int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
       int val;
       cin >> val;

       if(val == -1) break;

       build_linked_list(head,tail,val);
    }
    check_palindrom(head);
    print_linked_list(head);
    return 0;
}