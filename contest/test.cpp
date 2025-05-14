#include<bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;

    cin>>n>>m;
    int arr[n+1];

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int cnt[n+1];
    set<int> s;

    for(int i=n;i>=1;i--){
        s.insert(arr[i]);
        cnt[i] = s.size();
    }

    while(m--) {
        int pos;
        cin>>pos;

        cout << cnt[pos]<<endl;
    }
    
    return 0;
}