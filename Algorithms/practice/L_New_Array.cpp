#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
       cin>>b[i];
    }

    vector<int> c;

    c.insert(c.begin(),b,b+n);
    c.insert(c.end(),a,a+n);

    for(int x : c){
        cout << x<<" ";
    }
    return 0;
}