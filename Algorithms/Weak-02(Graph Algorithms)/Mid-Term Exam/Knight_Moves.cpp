#include <bits/stdc++.h>
using namespace std;

const int infinity = 1e7+5; 
const int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};  
const int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};  

bool isValid(int x, int y, int N, int M) {
    return (x >= 0 && x < N && y >= 0 && y < M);
}

int bfs(int N, int M, int Kx, int Ky, int Qx, int Qy) {
    vector<vector<int>> dist(N, vector<int>(M, infinity)); 
    queue<pair<int, int>> q;

    dist[Kx][Ky] = 0;  
    q.push({Kx, Ky});

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        int x = current.first;
        int y = current.second;

        if (x == Qx && y == Qy) {
            return dist[x][y];
        }

        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (isValid(nx, ny, N, M) && dist[nx][ny] == infinity) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;  
        cin >> N >> M;

        int Kx, Ky; 
        cin >> Kx >> Ky;

        int Qx, Qy;  
        cin >> Qx >> Qy;

        int result = bfs(N, M, Kx, Ky, Qx, Qy);
        cout << result << endl;
    }

    return 0;
}
