#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> s;
    queue<int> q;

    int n1;
    cin>>n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }

    int n2;
    cin>>n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    bool flag = true;

    if(s.size()!=q.size()){
        cout<<"NO\n";
    }else{
        while (!s.empty())
        {
            if(s.top()!=q.front()){
                flag = false;
            }
            s.pop();
            q.pop();
        }

        if(flag){
            cout <<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    
    return 0;
}