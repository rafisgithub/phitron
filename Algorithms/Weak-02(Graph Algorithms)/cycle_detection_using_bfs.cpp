#include <bits/stdc++.h>

using namespace std;

int main(){

    int n , e;

    cin >> n >> e;

    vector<int> mat[n];

    while(e--){
        int a,b;
        cin >> a>>b;

        mat->push_back(a);
        // mat->push_back(b);
    }

    for(auto child : mat[0]){

        cout << child<<" ";

    }

    return 0;
}