#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m;
    cin>>n>>m;

    stack<int> s;
    queue<int> q;

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