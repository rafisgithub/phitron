#include<bits/stdc++.h>

using namespace std;

int main() {

    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(100);
    pq.push(3);
    pq.push(2);

    cout << pq.top() << endl;
    return 0;
}