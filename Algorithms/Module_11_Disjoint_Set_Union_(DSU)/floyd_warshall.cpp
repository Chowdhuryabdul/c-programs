#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int grid[n+5][n+5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j){
                grid[i][j] = 0;
            }else
            grid[i][j] = INT_MAX;
        }
        
    }
    
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        grid[a][b] = min(grid[a][b], c);
        grid[b][a] = min(grid[b][a], c);
    }
    
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(grid[i][k] != INT_MAX && grid[k][j] != INT_MAX && grid[i][k] + grid[k][j] < grid[i][j]){
                    grid[i][j] = grid[i][k] + grid[k][j];
                }
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(grid[i][j] == INT_MAX){
                cout << "INF ";
            }else
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}