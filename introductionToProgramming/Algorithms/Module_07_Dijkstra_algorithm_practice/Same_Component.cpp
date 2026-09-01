#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis [1005][1005];
int level[1005][1005];
vector<pair<int,int>> direction = {{0, 1},{0, -1}, {1, 0}, {-1, 0}};
int n, m;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}
void bfs(int si, int sj){
    queue<pair<int,int>> q;
q.push({si, sj});
level[si][sj]= 0;
vis[si][sj] = true;
while (!q.empty())
{
    pair<int,int> par = q.front();
    q.pop();
    int par_i = par.first;
    int par_j = par.second;
    // cout  <<par_i << " " << par_j << endl;
    for (int i = 0; i < 4; i++)
    {
        int ci = par_i + direction[i].first;
        int cj = par_j + direction[i].second;

        if(!vis[ci][cj] && valid(ci, cj) && grid[ci][cj] == '.'){
            q.push({ci,cj});
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
    int si, sj;
    cin >> si >> sj;
    int dst_i, dst_j;
    cin >> dst_i >> dst_j;

    // cout << dst_i << dst_j;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(si, sj);
    if(vis[dst_i][dst_j]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}