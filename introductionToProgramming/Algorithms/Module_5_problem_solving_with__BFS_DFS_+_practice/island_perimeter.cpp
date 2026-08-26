#include<bits/stdc++.h>
using namespace std;
int grid[1005][1005];
bool vis[1005][1005];
vector <pair<int,int>> direction = {{0, 1},{0, -1},{1, 0},{-1, 0}};
int row, col;
int cnt = 0;
bool valid(int i, int j){
    if(i < 0 || i >= row || j < 0 || j >= col)
    return false;
    return true;
}

void dfs(int i, int j){

    // cout << i << " " << j << endl;
    vis[i][j] = true;

    for (int k = 0; k < 4; k++)
    {
        int ci = i + direction[k].first;
        int cj = j + direction[k].second;

        // if(!vis[ci][cj] && valid(ci, cj) == true && grid[ci][cj] == 1){
        //     dfs(ci, cj);
        //     // vis[ci][cj] = true;
        // }
        // if i can get the water it menas there will be a barricade
        if(valid(ci, cj) == false){
            cnt ++;
        }
        else if(valid(ci, cj) == true && grid[ci][cj] == 0){
            cnt ++;
        } 
        else if(valid(ci, cj) == true && !vis[ci][cj] && grid[ci][cj] == 1){
            dfs(ci, cj);
        }
    }
    
}

int main()
{
   cnt = 0;
    cin >> row >> col;
    int i, j;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          cin >>  grid[i][j];
        }  
    }
   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if(!vis[i][j] && grid[i][j] == 1){
            dfs(i, j);
            
           }
        }  
    }
    memset(vis, false, sizeof(vis));
    cout << cnt << endl;
    return 0;
}