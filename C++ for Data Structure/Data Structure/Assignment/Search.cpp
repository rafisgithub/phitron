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

void find_index_of_given_val(Node *head,int val){
    Node *temp = head;
    int index = 0;
    bool flag = false;
    while (temp!=NULL)
    {

       if(temp->val == val){
        flag = true;
        break;
       }else{
        index++;
       }
       temp = temp->next;
    }
    
   if(flag){
     cout<<index<<endl;
   }else{
    cout<<"-1\n";
   }
}

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
        int val;
        cin >> val;

        if(val == -1) break;

        build_linked_list(head,tail,val);
        }
        int val;
        cin>>val;
        find_index_of_given_val(head,val);
    }
    
    return 0;
}