#include<bits/stdc++.h>
using namespace std;
int grid[1005][1005];
bool vis[1005][1005];
int row, col;
int cnt = 0;
vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int i, int j){
    if(i < 0 || i >= row || j < 0 || j >= col)
    return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    // cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if(!vis[ci] [cj] && valid(ci, cj) == true && grid[ci][cj] == 1){
            dfs(ci, cj);
        }
    }
    
}
int main()
{
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
        
    }

    memset(vis, false, sizeof(vis));
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(!vis[i][j] && grid[i][j] == 1){
                dfs(i, j);
                cnt ++;
            }
        }
        
    }
    cout << cnt << endl;
    
    return 0;
}