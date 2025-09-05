#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    
    int minArea = INT_MAX;
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                int count = 0;
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;
                while (!q.empty()) {
                    auto current = q.front();
                    q.pop();
                    count++;
                    int x = current.first;
                    int y = current.second;
                    for (int d = 0; d < 4; d++) {
                        int nx = x + directions[d][0];
                        int ny = y + directions[d][1];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '.' && !visited[nx][ny]) {
                            visited[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }
                }
                if (count < minArea) {
                    minArea = count;
                }
            }
        }
    }
    
    if (minArea == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minArea << endl;
    }
    
    return 0;
}