#include<bits/stdc++.h>
using namespace std;
int grid[10005][10005];
bool vis[10005][10005];
int n, m;
int cnt ;
int mx;
vector<pair<int, int>> direction = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m )
    return false;
    return true;
}

void dfs(int si, int sj){
    vis[si][sj] = true;
    cnt ++;
    for(int i = 0; i < 4; i ++){
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if(!vis[ci][cj] && valid(ci, cj) == true && grid[ci][cj] == 1 )
        dfs(ci, cj);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin >> grid[i][j];
        }
        
    }
    // int cell = 0;
    
    mx = 0;
    memset(vis, false, sizeof(vis));
    
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] == 1){
                // why i make it 0 here, as before running every dfs i have to make it 0 otherwise it will keep counnting with the next dfs
                cnt = 0;
                dfs(i, j);
                // cell++;
                // cout << cnt << endl;
                mx = max(mx, cnt);
            }
        }
        
    }
    cout << mx;
    return 0;
}