#include<bits/stdc++.h>
using namespace std;

bool vis[105][105];
vector<pair<int,int>> direction = {{0, -1}, {0, 1},{-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}

void dfs(int si, int sj){
    cout << si << " " << sj << endl;
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
       int ci = si + direction[i].first;
       int cj = sj + direction[i].second;
       
       if(!vis[ci][cj] && valid(ci, cj) == true){
        dfs(ci, cj);
       }

    }
    
}

int main()
{
    cin >> n >> m;
    char grid[n][m];
    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
            
    }

    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    
    return 0;
}