#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
        int val;
        Node* next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main() {

    Node a(100);
    Node b(200);
    Node c(300);

    a.next = &b;
    b.next = &c;
    
    printf("%d\n",a.val);
    printf("%d\n",a.next->val);
    printf("%d\n",a.next->next->val);
    
    return 0;
}