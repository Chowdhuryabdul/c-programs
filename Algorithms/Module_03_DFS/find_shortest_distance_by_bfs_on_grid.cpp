#include<bits/stdc++.h>
using namespace std;
char grid [105][105];
bool vis[105][105];
vector<pair<int, int>> direction = {{0, -1},{0, 1},{-1, 0},{1, 0}};

int level[105][105];

int n, m;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}


void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    // we know the level or distane of source is 0
    level[si][sj] = 0;

    while (!q.empty())
    {
        /* code */
       pair <int, int > par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        cout << par_i << " " << par_j << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + direction[i].first;
            int cj = par_j + direction[i].second;

            if(!vis[ci][cj] && valid(ci, cj) == true){
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
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
            cin >> grid[i][j];
        }
        
    }

    // index of source of row and col
    int si, sj;
    cin >> si >> sj;
    //  index of destination row and col
    int dst_i, dst_j;
    cin >> dst_i >> dst_j;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(si, sj);    
    cout << "shortest distance: - " << level[dst_i][dst_j] << endl;
    return 0;
}