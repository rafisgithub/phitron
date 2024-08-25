#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

     int t;
     cin >> t;

    queue<string> q;

    while (t--) {
        int cmd;
        cin >> cmd;

        if (cmd == 0) {

            string name;
            
            cin >> name;
            q.push(name);

        } else if (cmd == 1) {
            if (!q.empty()) {
                cout<<q.front()<<endl;
                q.pop();
            } else {
                cout<<"Invalid\n";
            }
        }
    }

    return 0;
}