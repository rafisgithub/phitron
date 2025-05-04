#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10,20,30,40,50,20};
    vector<int> v1 = {70,80,90};

    v.insert(v.begin() + 6, v1.begin(), v1.end());

    auto it = find(v.begin(), v.end(), 10); // no * here

    cout << &(*it) << endl;

    if(it != v.end()){
        cout << "Found" << endl;
    }

    for(int val : v) 
        cout << val <<" ";

    return 0; 
}
