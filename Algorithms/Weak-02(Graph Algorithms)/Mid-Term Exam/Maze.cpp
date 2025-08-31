#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1005;
char maze[MAX_N][MAX_N];
int N, M;
int startX, startY, endX, endY;
bool visited[MAX_N][MAX_N];

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

struct State {
    int x, y;
    vector<pair<int, int>> path;
};

bool isValid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < M && !visited[x][y] && (maze[x][y] == '.' || maze[x][y] == 'D');
}

vector<pair<int, int>> findPath() {
    queue<State> q;
    memset(visited, false, sizeof(visited));
    
    State start = {startX, startY, {{startX, startY}}};
    q.push(start);
    visited[startX][startY] = true;
    
    while (!q.empty()) {
        State curr = q.front();
        q.pop();
        
        int x = curr.x, y = curr.y;
        
        if (x == endX && y == endY) {
            return curr.path;
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (isValid(nx, ny)) {
                visited[nx][ny] = true;
                State next = {nx, ny, curr.path};
                next.path.push_back({nx, ny});
                q.push(next);
            }
        }
    }
    
    return {};
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> maze[i][j];
            if (maze[i][j] == 'R') {
                startX = i;
                startY = j;
            } else if (maze[i][j] == 'D') {
                endX = i;
                endY = j;
            }
        }
    }
    
    vector<pair<int, int>> path = findPath();
    
    for (auto [x, y] : path) {
        if (maze[x][y] != 'R' && maze[x][y] != 'D') {
            maze[x][y] = 'X';
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }
    
    return 0;
}