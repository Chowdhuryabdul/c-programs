#include<bits/stdc++.h>
using namespace std;
vector<int> edg_list[105];
int n, m;
bool vis[105];
int parent[105];
bool flag;
void dfs(int src){
    vis[src] = true;
    for (int child :edg_list[src])
    {
        if(vis[child] && parent[src] != child)
        flag = true;
        if(!vis[child]){
             parent[child] = src; 
            dfs(child);
            // in this way, if there is only 2 Nodes, still it considers it as cycle, but we have learned that in undirected graph we must have 3 nodes to be a cycle. why it happends? this is because we are calling recursion first, when we call the recusrion then parent of child will src, but if we do this before recursion call then when parent of child will be src than it will be detected in the first condition and it will be stopped there. so write this line beroe recusion call
            // parent[child] = src;        
            }
    }
    
}
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        edg_list[a].push_back(b);
        edg_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    flag = false;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            dfs(i);
        }
    }
    
    // to check real parent of parent
    for (int  i = 0; i < n; i++)
    {
        // cout << i << " parent " << parent[i] << endl;
    }
    
    if(flag)
    cout << "Cylce detected\n";
    else 
    cout << "No cycle\n";
    
    return 0;
}