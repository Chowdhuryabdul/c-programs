#include<bits/stdc++.h>
using namespace std;
int grid[1005][1005];
int n, m;
int cnt = 0;
bool vis[1005][1005];
bool flag;
vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0},{-1, 0}};
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}
void dfs(int si, int sj){
    vis[si][sj] = true;
    if(grid[si][sj] == 1){
        flag = false;
    }
    for (int i = 0; i < 4; i++)
    {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if(!valid(ci, cj)){
            flag = false;
        }
      else if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0){

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
    // int cnt = 0;
    memset(vis, false, sizeof(vis));
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] == 0)
            {   flag = true;
                dfs(i, j);
                if(flag){

                    cnt ++;
                }
            } 
        }
        
    }
    cout << cnt << endl;
    return 0;
}