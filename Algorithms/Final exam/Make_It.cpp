#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
bool dp[100001];

bool bfs(ll n) {
    if (n == 1) return true; 
    
    queue<ll> q;
    q.push(1); 
    memset(dp,false,sizeof(dp));
    
    dp[1] = true;

    while (!q.empty()) {
        ll f = q.front();
        q.pop();
        ll add3 = f + 3;
        ll mul2 = f * 2;

        if (add3 == n || mul2 == n) return true;

        if (add3 <= n && !dp[add3]) {
            q.push(add3);
            dp[add3] = true;
        }
        if (mul2 <= n && !dp[mul2]) {
            q.push(mul2);
            dp[mul2] = true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        if (bfs(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
