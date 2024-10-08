#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
vector<int> adj[N];



int main() {

    int n,e;
    cin>>n>>e;
    
    while(e--) {
        int a,b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int node;
    cin>>node;

    for(auto child : adj[node]) {
        cout << child <<" ";
    }

    return 0;
}