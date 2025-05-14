#include <bits/stdc++.h>
using namespace std;

class Point {
public:
    int x, y, time;

    Point(int x, int y, int time) : x(x), y(y), time(time) {}
};

class MazeSolver {

private:
    int rows, cols;
    vector<vector<char>> maze;
    vector<vector<bool>> visited;
    int startX, startY, exitX, exitY;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

public:
    void readInput() {
        cin >> rows >> cols;
        maze.assign(rows, vector<char>(cols));
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> maze[i][j];

        cin >> startX >> startY >> exitX >> exitY;
        --startX; --startY;
        --exitX; --exitY;
    }

    int solve() {

        if (!isValid(startX, startY) || !isValid(exitX, exitY)) return -1;
        if (maze[startX][startY] == '-' || maze[exitX][exitY] == '-') return -1;
        if (startX == exitX && startY == exitY) return 0;

        visited.assign(rows, vector<bool>(cols, false));
        queue<Point> q;
        q.push(Point(startX, startY, 0));
        visited[startX][startY] = true;

        while (!q.empty()) {
            Point current = q.front();
            q.pop();

            for (int i = 0; i < 4; ++i) {
                int newX = current.x + dx[i];
                int newY = current.y + dy[i];

                if (isValid(newX, newY) && maze[newX][newY] == '.' && !visited[newX][newY]) {
                    if (newX == exitX && newY == exitY)
                        return current.time + 1;

                    visited[newX][newY] = true;
                    q.push(Point(newX, newY, current.time + 1));
                }
            }
        }
        return -1;
    }

private:
    bool isValid(int x, int y) {
        return x >= 0 && x < rows && y >= 0 && y < cols;
    }
};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) {

        MazeSolver solver;

        solver.readInput();
        
        cout << solver.solve() << '\n';
    }
    return 0;
}
