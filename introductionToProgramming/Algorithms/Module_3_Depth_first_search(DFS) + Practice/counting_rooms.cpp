#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis [1005][1005];
int r, c;
vector<pair<int, int>> direction = {{0, 1},{0, -1},{1, 0}, {-1, 0}};
bool valid(int i, int j){
    if(i < 0 || i >= r || j < 0 || j >= c)
    return false;
    return true;
}

void dfs(int i, int j){

// cout << src << endl;
vis[i][j] = true;
for (int k = 0; k < 4; k++)
{
    // int ci, cj;
    int ci = i + direction[k].first;
    int cj = j + direction[k].second;

   if(!vis[ci][cj] && valid(ci, cj) == true && grid[ci][cj] == '.'){
    dfs(ci, cj);
   }
}


}
int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
        
    }
    memset(vis, false, sizeof(vis));
    int cnt = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(vis[i][j] == false && grid[i][j] == '.'){
                dfs(i, j);
                cnt ++;
            }
        }
        
    }
    cout << cnt << endl;
  
    
    return 0;
}