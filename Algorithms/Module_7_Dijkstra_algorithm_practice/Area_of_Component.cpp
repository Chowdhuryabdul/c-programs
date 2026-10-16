#include<bits/stdc++.h>
using namespace std;
char grid [1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> direction = {{0, 1},{0, -1}, {1, 0}, {-1, 0}};
int n, m;
int cnt;
int mn = INT_MAX;
bool component = false;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}
void dfs(int si, int sj){
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.'){
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] == '.'){
                component = true;
                cnt = 0;
                dfs(i, j);
                mn = min(mn, cnt);
            }
        }  
    }

    if(component == false)
        cout << -1 << endl;
    else
    cout << mn << endl;
    
    return 0;
}