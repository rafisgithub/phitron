#include <bits/stdc++.h>

using namespace std;

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

    for(int child : arr[0]) {
        cout << child <<" ";
    }
    return 0;
}