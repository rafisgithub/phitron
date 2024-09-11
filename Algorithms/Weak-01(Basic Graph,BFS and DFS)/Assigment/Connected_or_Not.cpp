#include <bits/stdc++.h>
using namespace std;

int n, e;
vector<int> mat[1005];
bool is_visited[1005][1005];

void add_e(int a, int b)
{
    mat[a].push_back(b);
    is_visited[a][b] = true;
}

bool ans(int a, int b)
{
    if (a == b)
        return true;
    if (is_visited[a][b] == true)
        return true;
    else
        return false;
}

int main()
{

    cin >> n >> e;
    memset(is_visited, false, sizeof(is_visited));

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        add_e(a, b);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int first_node, second_node;
        cin >> first_node >> second_node;
        
        if (ans(first_node, second_node))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}