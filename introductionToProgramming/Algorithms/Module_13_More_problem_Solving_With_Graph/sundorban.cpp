#include<bits/stdc++.h>
using namespace std;
bool vis[35][35];
int level[35][35];
char grid[35][35];
int n;

vector <pair <int,int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j){

        if(i < 0 || i >=n || j < 0 || j >= n){
            return false;
        }
        return true;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si, sj});
    level[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_si = par.first;
        int par_sj = par.second;
        for (int i = 0; i < 4; i++)
        {
           int child_i =par_si + direction[i].first;
           int child_j = par_sj + direction[i].second;

           if(valid(child_i, child_j) && !vis[child_i][child_j] && grid[child_i][child_j] != 'T') // here we need to check if its value only t than we will not move, but if p, s, or E we will move.
           {
            q.push({child_i, child_j});
            vis[child_i][child_j] = true;
            level[child_i][child_j] = level[par_si][par_sj] + 1;
           }
        }
        
    }
    

}




int main()
{
    int si, sj, di, dj; // it is represnt the src row and col and dst row and col
   
//    in case of EOF reason it will run until input is finished
while ( cin >> n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];

            // as we do not have seperate input for src and dst, but it is given in the 2d array which is s and e
            if(grid[i][j] == 'S'){
                si = i;
                sj = j;
            }
            // dstnination
            if(grid[i][j] == 'E'){
                di = i;
                dj = j;
            }
        }
        
    }
   
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(si, sj);
    
    // to check si and sj and di and dj works or not
    // cout << si << " " << sj << endl;
    // cout << di << " " << dj << endl;

    cout << level[di][dj] << endl;
}

   
    
    
    return 0;
}