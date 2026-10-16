#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[10005];
bool vis[10005];
// we need to track the parent as whenever we visit parenet again than we will realize that it is a 
int parent[10005];

// when we will get the cycle we will make it true
bool flag;
void bfs(int src){
    queue<int>q;
    if(!vis[src]){

        q.push(src);
        vis[src] = true;
    }
    // q.push(src);
    //     vis[src] = true;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        cout << par << endl;
        for(int child : adj_list[par]){

            // here i will write the logic about cycle is found or not
            if(vis[child] && parent[par] != child)
            flag = true;
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                // it menas parent of child will the par
                parent[child] = par;
            }
        }
    }
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
        adj_list[b].push_back(a);

    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    // at the start we will make flag false that means we do not have any cycle. why i set false here? this is because when i decalared i says the value true it means cycle is there. but i do not know is cycle exists or not. so i make here false as i do not know that here is a cycle. 
    flag = false;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i])
        bfs(i);

    }
    if(flag)
    cout << "Cycle detected\n";
    else
    cout << "No Clycle\n";
    
    return 0;
}