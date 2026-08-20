#include<bits/stdc++.h>
using namespace std;
vector<int> edge_lst[1005];
bool vis[1005];
void bfs(int src){

    queue<int> q;
    if(!vis[src]){
       q.push(src);
       vis[src] = true; 
    } 

    while(!q.empty()){
        int par = q.front();
        q.pop();
        cout << par << " ";

        for(int child : edge_lst[par]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while(e--){
        int a , b;
        cin >> a >> b;
        edge_lst[a].push_back(b);
        edge_lst[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    // need to take input of source and destination node
    int src, dst;
    cin >> src >> dst;

    bfs(src);

    // here cheking the destination Node is visited or NOt
    if(vis[dst])
    cout << "Yes\n";
    else
    cout << "NO\n";
    return 0;
}