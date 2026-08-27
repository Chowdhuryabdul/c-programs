#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
bool path_vis[1005];
bool flag;
void dfs(int src){
    vis[src] = true;
    path_vis[src] = true;
    for (int child : adj_list[src])
    {
       if(vis[child] && path_vis[child]){
        flag = true;
       }
        if(!vis[child]){
            dfs(child);
            
        }
    }
    // i need to make the pathvis false. when? as it returns to the previous. as in the question we have not written about retun. so the function will return when the whole work will be done. so ut return from here- i need to make the path vis false again here
    path_vis[src] = false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
       
    }
    memset(vis, false, sizeof(vis));
    memset(path_vis, false, sizeof(path_vis));
    flag = false;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            dfs(i);
        }
    }
   if(flag) cout << "Cycle found\n";
   else cout << "No Cycle\n"; 
    

    return 0;
}