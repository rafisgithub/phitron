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

void build_linked_list(Node *&head,int val){
    
   Node *newNode = new Node(val);

   if(head == NULL){
    head = newNode;
   }else{
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
   }
}
void check_duplicate(Node *head){
    Node *temp = head;

    bool duplicate = false;
    int counter = 0;
   

   vector<int> arr;

    while (temp!=NULL)
    {
        
        arr[5]++;

        if(arr[temp->val]>=2){
            duplicate = true;
            break;
        }
        temp = temp->next;
    }

    if(duplicate){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
    
}
int main(){
    Node *head = NULL;

    while (true)
    {
       int val;
       cin>>val;
       if(val == -1) break;
       build_linked_list(head,val);
    }

    check_duplicate(head);
    
    return 0;
}