#include<bits/stdc++.h>
using namespace std;
// int grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> direction = {{-1, 2}, {-2, 1}, {1, 2}, {2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
int level[1005][1005];
int n , m;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}

void bfs(int si, int sj){
    queue<pair<int,int>>q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        // cout << par_i << " " << par_j << endl;
        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + direction[i].first;
            int cj = par_j + direction[i].second;

            if(valid(ci, cj) && !vis[ci][cj]){
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
        

    }
    

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < m; j++)
    //         cin >> grid[i][j];
       
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int si, sj;
    cin >> si >> sj;
    int dst_i, dst_j;
    cin >> dst_i >> dst_j;
    // cout << dst_i << dst_j;
    bfs(si, sj);

    cout << level[dst_i][dst_j] << endl;
    } 
    return 0;
}




