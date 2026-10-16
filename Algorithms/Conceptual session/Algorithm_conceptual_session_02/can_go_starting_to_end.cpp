#include<bits/stdc++.h>
using namespace std;
char grid[2005][2005];
bool vis[2005][2005];
vector<pair<int,int>> direction = {{0, 1},{0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
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
    char start = 'S';
    char end = 'E';
    int si, sj, ei, ej;

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if(grid[i][j] == start){
             si = i;
             sj = j;
           }
           else if(grid[i][j] == end){
            ei = i;
            ej = j;
           }
        }
    } 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && grid[i][j] != '#')
            {
                dfs(si, sj);
            }
        }
        
    }
    // dfs(si, sj);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vis[i][j] << " ";
        }
        cout << endl;
        
    }

    if(vis[ei][ej]) cout <<"YES"<< endl;
    else cout << "NO" << endl;
    
    
    return 0;
}