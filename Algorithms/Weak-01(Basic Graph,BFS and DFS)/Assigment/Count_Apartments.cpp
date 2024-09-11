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

void dfs(int si, int sj)
{
    is_visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !is_visited[ci][cj] && ar[ci][cj] != '#')
        {
            dfs(ci, cj);
        }
    }
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

    int cunt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] != '#' && is_visited[i][j] == false)
            {
                dfs(i, j);
                cunt++;
            }
        }
    }
    cout << cunt;

    return 0;
}