#include<bits/stdc++.h>
using namespace std;

vector <int> adj_list[1005];
bool vis[1005];

void dfs(int src)
{
    vis[src] = true;
    for(int child : adj_list[src]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    int src, dst;
    cin >> src >> dst;
    dfs(src);
    if(vis[dst])
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    return 0;
}