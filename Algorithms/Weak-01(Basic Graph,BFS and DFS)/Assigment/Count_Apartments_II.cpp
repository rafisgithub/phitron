#include <bits/stdc++.h>

using namespace std;
int n, m;
char ar[1005][1005];
bool is_visited[1005][1005] = {false};

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
    {
        return false;
    }
    return true;
}

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int bfs(int si, int sj)
{
    is_visited[si][sj] = true;
    queue<pair<int, int>> q;
    q.push({si, sj});
    int cnt = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        cnt++;

        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;

            int cj = par.second + d[i].second;

            if (valid(ci, cj) && !is_visited[ci][cj] && ar[ci][cj] != '#')
            {
                q.push({ci, cj});
                is_visited[ci][cj] = true;
            }
        }
    }

    return cnt;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    vector<int> hr;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] != '#' && is_visited[i][j] == false)
            {
                int h = bfs(i, j);

                hr.push_back(h);
            }
        }
    }
    if (hr.empty())
    {
        cout << "0";
    }
    else
    {
        sort(hr.begin(), hr.end());

        for (int c : hr)
            cout << c << " ";
    }

    return 0;
}