#include<bits/stdc++.h>
using namespace std;
// grid2
int grid2[1005][1005];
int grid1[1005][1005];
int n, m;
int cnt = 0;
bool vis[1005][1005];
bool flag;

vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}
void dfs(int si, int sj){
    vis[si][sj] = true;

    // it is not sub island
if(grid1[si][sj] == 0){
    flag = false;
}
    for (int i = 0; i < 4; i++)
    {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
        dfs(ci, cj);
    }  
}




int main()
{
    // grid 2
    cin >> n >> m;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> grid2[i][j];
        }   
    }
   

    // grid 1
    int row, col;
     cin >> row >> col;
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid1[i][j];
        }   
    }

   memset(vis, false, sizeof(vis));
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid2[i][j] == 1){
                flag = true;
                dfs(i, j);
                if(flag == true){

                    cnt ++;
                }
            }
        }   
    }
  
    // cout << cnt << " " << cnt_1 << endl;
 

    cout << cnt << endl;
    return 0;
}