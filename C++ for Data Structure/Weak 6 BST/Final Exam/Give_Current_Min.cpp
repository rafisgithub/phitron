#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    // vector<int> arr(n);
    int arr[n];

    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pq.push(arr[i]);
    }
    
    int q;
    cin >> q;

    while (q--)
    {
        int command;
        cin >> command;

        if (command == 0) {
            int value;
            cin >> value;
            pq.push(value);

            if (!pq.empty()) {
                cout << pq.top() << endl;
            }

        } else if (command == 1) { 
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top() << endl;
            }

        } else if (command == 2) { 
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop(); 
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq.top() << endl;
                }
            }
        }
    }

    return 0;
}
