#include<bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    int mn_t = min(a,b);
    int mn = min(mn_t,c);
    int mx_t = max(a,b);
    int mx = max(mx_t,c);

    cout << mn << " " << mx <<endl;
    return 0;
}