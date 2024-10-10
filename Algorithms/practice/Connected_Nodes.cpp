#include <bits/stdc++.h>

using namespace std;


class cmp {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    int n,e;
    cin>>n>>e;

    vector<int> arr[n];

    while(e--) {
        int a,b;
        cin>>a>>b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }


    int q;
    cin>>q;

    while(q--) {
        int par;
        cin>>par;

        vector<int> v;
        for(int child : arr[par]) {
            v.push_back(child);
        }

        if(v.empty()){
            cout <<"-1";
        }

        sort(v.begin(),v.end(),cmp());

        for(int child : v) {
            cout << child <<" ";
        }
        cout << endl;
    }
    return 0;
}