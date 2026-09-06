#include<bits/stdc++.h>
using namespace std;
char grid[8][8];
bool vis[8][8];
int level [8][8];
int n = 8, m = 8;;
vector<pair<int, int>> direction = {{-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}};
bool valid(int i, int j){
    if(i < 0 || i >= n  || j < 0 || j >= m)
    return false;
    return true;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;

    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_node = par.first;
        int par_edg = par.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = par_node + direction[i].first;
            int cj = par_edg + direction[i].second;

            if(valid(ci, cj) && !vis[ci][cj]){
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_node][par_edg] + 1;
            }
        }
        
    }
    
}
int main()
{
  int t; cin >> t;
  while (t--)
  {
      // cin >> n >> m;
    string src , des;
    cin >> src >> des;


    int si, sj, di, dj;
    
    // convert string to integer
    si = src[0] - 'a';
    sj = src[1] -  '1';
    di = des[0] - 'a';
    dj = des[1] - '1';

    // cout << si << sj << " " << di << dj << endl;
    
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    bfs(si, sj);

    // we check visited of des
    // cout << vis[di][dj] << endl;
    cout << level[di][dj] << endl;
  }
  
    return 0;
}