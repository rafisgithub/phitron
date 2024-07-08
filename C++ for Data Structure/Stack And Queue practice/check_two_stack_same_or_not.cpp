#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
        
        int val;
        Node *next;
        Node* prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};
class MyStack{

    public:
        Node *head;
        Node* tail;
        int sz ;

        MyStack(){
            this->head = NULL;
            this->tail = NULL;
            this->sz = 0;
        }

        void push(int val){
            sz++;
            Node* newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = tail->next;
            }

        }

        void pop(){
            sz--;
            Node* toDelete = tail;
            tail = tail->prev;
            if(tail == NULL){
                head = NULL;
            }
            delete toDelete;

        }

        int top(){
            return tail->val;
        }

        int size(){
            return sz;
        }

        bool empty(){
            if(sz == 0) return true;
            else return false;
        }
};

int main(){
    MyStack s1,s2;
    int n1;
    cin>>n1;
    for(int i=1;i<=n1;i++){
        int x;
        cin>>x;
        s1.push(x);

    }

    int n2;
    cin>>n2;
    for(int i=1;i<=n2;i++){
        int x;
        cin>>x;
        s2.push(x);

    }

    bool flag = true;

    if(s1.size()!=s2.size()){
        cout<<"NO";
        
    }else{
        while (!s1.empty() && !s2.empty())
        {
           if(s1.top()!=s2.top()){
            flag = false;
            break;
           }
           s1.pop();
           s2.pop();
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
  
    
    return 0;
}