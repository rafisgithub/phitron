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

class MyStack{

    public:
        Node* head;
        Node* tail;
        int sz;
        MyStack(){
           this->head = NULL;
           this->tail = NULL;
           this->sz = 0;
        }

        void push(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
            sz++;
        }

        void pop(){
            if(head == NULL){
                return;
            }
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            sz--;
        }

        int top(){
            if(head == NULL){
                return -1;
            }
            return head->val;
        }
        int size(){
            return sz;
        }

        bool empty(){
            if(size()==0) return true;
            else return false;
        }
        
};

class MyQueue{
    public:

        Node* head;
        Node* tail;
        int sz;

        MyQueue(){
            this->head = NULL;
            this->tail = NULL;
            this->sz = 0;
        }

        void push(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                tail = tail->next;
            }
            sz++;
        }
        void pop(){
            if(head==NULL){
                return;
            }
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            sz--;
        }
        int front(){
            if(head == NULL) return -1;
            return head->val;
        }
        int size(){
            return sz;
        }

        bool empty(){
            if(size()==0) 
                return true;
            else
                return false;
        }
};


int main(){
    int n;
    int m;
    cin>>n>>m;

  
         MyStack s;
  
        MyQueue q;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;

        s.push(x);
    }
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin>>x;

        q.push(x);
    }

    if(s.size()!=q.size()){

        printf("NO\n");
        return 0;
    }
        

    bool flag = false;
    while (!s.empty())
    {
       if(s.top()!=q.front()){
        flag = true;
        break;
       }else{
        s.pop();
        q.pop();
       }
    }
    
    if(!flag){
        printf("YES\n");
    }else{
        printf("NO\n");
}
    
    return 0;
}