#include <bits/stdc++.h>
using namespace std;

void dfs(size_t x, size_t y, vector<vector<char>>& matrix, vector<vector<bool>>& visited, int& area) {

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    visited[x][y] = true;
    area++;

    for (int i = 0; i < 4; ++i) {
        size_t newX = x + dx[i];
        size_t newY = y + dy[i];

        if (newX >= 0 && newX < matrix.size() && newY >= 0 && newY < matrix[0].size() &&
            !visited[newX][newY] && matrix[newX][newY] == '.') {
            dfs(newX, newY, matrix, visited, area);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> matrix(N, vector<char>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<bool>> visited(N, vector<bool>(M, false));
    int minArea = INT_MAX;
    bool hasComponents = false;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (matrix[i][j] == '.' && !visited[i][j]) {
                int area = 0;
                dfs(i, j, matrix, visited, area);
                minArea = min(minArea, area);
                hasComponents = true; 
            }
        }
    }

    if (hasComponents) {
        cout << minArea << endl;
    } else {
        cout << -1 << endl; 
    }

    return 0;
}
