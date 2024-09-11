#include <bits/stdc++.h>

using namespace std;

int n, m;
char ar[1005][1005];
bool is_visited[1005][1005] = {false};

pair<int, int> src;

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
    {
        return false;
    }
    return true;
}

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool dfs(int si, int sj)
{
    is_visited[si][sj] = true;

    if (ar[si][sj] == 'B')
    {
        return true;
    }
    bool found = false;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !is_visited[ci][cj] && ar[ci][cj] != '#')
        {
            found = found || dfs(ci, cj);
        }
    }
    return found;
}
int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];

            if (ar[i][j] == 'A')

                src = {i, j};
        }
    }
    bool find = dfs(src.first, src.second);
    if (find)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}