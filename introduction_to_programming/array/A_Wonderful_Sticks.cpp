#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> ans(n);
        stack<int> stk;
        int val = n;

        for (int i = 0; i < n - 1; ++i) {
            stk.push(i);
            if (s[i] == '<') {
                while (!stk.empty()) {
                    ans[stk.top()] = val--;
                    stk.pop();
                }
            }
        }

        stk.push(n - 1); // Always push the last position
        while (!stk.empty()) {
            ans[stk.top()] = val--;
            stk.pop();
        }

        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
