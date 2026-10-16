#include<bits/stdc++.h>
using namespace std;
int grid[1005][1005];
bool vis[1005][1005];

vector<pair<int,int>> direction = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}

void dfs(int si, int sj){
    vis[si][sj] = true;
   
    // cout << si << " " << sj << endl;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1){
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
            cin >> grid[i][j];
        }
        
    }
// int cnt1 = 0;
    memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            // this condition gives me the bounndary cell
            if((i == 0 || j == 0 || i == n - 1 || j == m - 1) && grid[i][j] == 1 && !vis[i][j]){
          
                dfs(i, j);
                // cnt1 ++;
            }
        }
        
    }

    int cnt = 0;
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(grid[i][j] == 1 && !vis[i][j]){
                cnt ++;
            }
        }
        
    }
    
    
    cout << cnt  << endl;
    // cout << cnt1  << endl;
    return 0;
}