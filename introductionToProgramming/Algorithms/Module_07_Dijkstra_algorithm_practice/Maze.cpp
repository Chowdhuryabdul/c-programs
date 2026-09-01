#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int level[1005][1005];
pair<int, int> parent[1005][1005];
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    parent[si][sj] = {-1, -1};
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        // cout << par_i << " " << par_j << endl;
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + direction[i].first;
            int cj = par_j + direction[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    char dst = 'D';

    char src = 'R';

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int si = -1, sj = -1, dst_i = -1, dst_j = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == src)
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == dst)
            {
                dst_i = i;
                dst_j = j;
            }
        }
    }
    bfs(si, sj);

    if (vis[dst_i][dst_j])
    {
        pair<int, int> node = {dst_i, dst_j};
        vector<pair<int, int>> path;
        while (node != pair<int, int>(-1, -1))
        {
            path.push_back(node);
            node = parent[node.first][node.second];
        }
        reverse(path.begin(), path.end());
        for (auto x : path)
        {
            int i = x.first;
            int j = x.second;

            if (grid[i][j] == '.')
                grid[i][j] = 'X';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
    
    return 0;
}