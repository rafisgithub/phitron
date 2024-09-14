#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y, int N, int M, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
    return (x >= 0 && x < N && y >= 0 && y < M && grid[x][y] == '.' && !visited[x][y]);
}

bool bfs(int Si, int Sj, int Di, int Dj, int N, int M, vector<vector<char>>& grid) {
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    queue<pair<int, int>> q;
   
    q.push({Si, Sj});
    visited[Si][Sj] = true;
    
    while (!q.empty()) {
        pair<int, int> cell = q.front();
        q.pop();
        int x = cell.first;
        int y = cell.second;
        
        if (x == Di && y == Dj) {
            return true;
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (isValid(nx, ny, N, M, grid, visited)) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<char>> grid(N, vector<char>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }
    
    int Si, Sj, Di, Dj;
    cin >> Si >> Sj >> Di >> Dj;
    
    if (bfs(Si, Sj, Di, Dj, N, M, grid)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
