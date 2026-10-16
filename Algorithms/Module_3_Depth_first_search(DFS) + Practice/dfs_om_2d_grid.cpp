#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];

// we have stored the direction in the vector and it will have 4 size. data type will be pair as we have two values at a time. to keep the value in pari i have grouped that as {} like this.
vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

// this function will return this row and col is valid or invalid 
bool valid(int i, int j){
    if( i < 0 || i >= n || j < 0 || j >= m) // if it is true than it will return false otherwise will return true. i do not need to write else
        return false;
    return true;
}
void dfs(int si, int sj)
{

    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    // as it says that we can go 4 direction, so if we run the loop 4 times we an get that 4 child
    for (int i = 0; i < 4; i++)
    {
        /* code */
        // it is the index of child from the arra

      int   ci = si + direction[i].first;
        int cj = sj + direction[i].second;
        // cout << ci << " " << cj << endl;
        // here we are checking two things, valid and invalid of ci and cj, and visited or not. so if it is valid and not visited than we will call the dfs recursion function
        if(valid(ci, cj) == true && !vis[ci][cj])
        dfs(ci, cj);
    }
    
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    // to print
    /*            for (int i = 0; i < n; i++)
       {
           for (int j = 0; j < m; j++)
           {
               cout << grid[i][j];
           }
           cout << endl;
       } */

    //    src is given to us so we need to take src as input- as it 2d so we have row and col- Si for row and Sj for col
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    return 0;
}