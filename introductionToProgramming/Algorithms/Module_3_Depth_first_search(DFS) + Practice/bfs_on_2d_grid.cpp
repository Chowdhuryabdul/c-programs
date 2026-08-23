#include<bits/stdc++.h>
using namespace std;

char grid [105][105];
vector <pair<int, int >> direction = {{0, -1},{0, 1},{-1, 0},{1, 0}};
bool vis[105][105];
int n, m;


bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m)
    return false;
    return true;

    }

void bfs(int si, int sj){
 
    // taken q as pair as we have two value at a time
    queue<pair <int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
     while (!q.empty())
     {
        /* code */

        // as we taking out these as pair 
        pair <int, int> par = q.front();
        q.pop();

        // we just divide the pair to make it easy
        int par_i = par.first;
        int par_j = par.second;

        cout << par_i << " " << par_j << endl;

        for(int i = 0; i < 4; i++){

            // finding the index of child
            int ci = par_i + direction[i].first;
            int cj = par_j + direction[i].second;
        
        if(!vis[ci][cj] && valid(ci, cj) == true)
        {
            q.push({ci,cj});
            vis[ci][cj] = true;
        }
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
    
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    bfs(si, sj);
    
    return 0;
}