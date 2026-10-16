#include<bits/stdc++.h>
using namespace std;
char grid[2005][2005];
bool vis[2005][2005];
vector<pair<int,int>> direction = {{0, 1},{0, -1}, {-1, 0}, {1, 0}};
int n, m;
int cnt = 0;
int cell = 0;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cell ++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;


        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#' ){
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
    memset(vis, false, sizeof(vis));
   
  
    // to store the cell cnt for each component
    vector<int>cell_cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] != '#')
            {
                cnt  ++;
                cell = 0;
                dfs(i, j);
                // cout << cell << endl;
                cell_cnt.push_back(cell);
            }
        }
        
    }
    // dfs(si, sj);
   
cout << cnt << endl;
   
// prnt each cell count from vector    
for(int cell : cell_cnt){
        cout << cell << endl;
    }
    
    return 0;
}