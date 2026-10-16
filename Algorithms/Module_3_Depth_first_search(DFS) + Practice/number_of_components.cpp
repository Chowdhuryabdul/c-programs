#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];

void dfs(int src){

    // cout << src << " ";
    vis[src] = true;

    for(int child : adj_list[src]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
      int a, b;
      cin >> a >> b;
      adj_list[a].push_back(b);
      adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    int cnt = 0;
    // run a loop on visited array- whenever we will get a false than we will run dfs
    for (int i = 0; i < n; i++)
    {
        if(vis[i] == false){
            // we will run the dfs and will send i as src
            dfs(i);
            cnt ++;
        }
    }
    
    cout << cnt << endl;

    
    return 0;
}