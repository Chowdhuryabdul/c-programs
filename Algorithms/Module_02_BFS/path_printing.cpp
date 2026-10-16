#include<bits/stdc++.h>
using namespace std;
vector<int> edg_list[1005];
bool vis[1005];
int level[1005];
// thi array will help us to track the parent
int parent[1005];
void bfs(int src){
    queue<int>q;
    q.push(src);
    if(!vis[src])
    vis[src] = true;
    level[src] = 0;

    // we can set here value of parent will be -1 - but we do not need it here as it already set  - 1 in the memset function
    parent[src] = -1;

    while(!q.empty()){
        int par = q.front();
        q.pop();
        cout << par << " ";

        for(int child : edg_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;

                // here we need to set the parent of child Node
                parent[child] = par;
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
        int a, b;
        cin >> a >> b;
        edg_list[a].push_back(b);
        edg_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    // starting all th eparent will be -1
    memset(parent, -1, sizeof(parent));
    int src, dst;
    cin >> src >> dst;
    bfs(src);

//   we want to print the path here - to do this we will take a variable to store the dst
int node = dst;

vector<int>path;
while(node != -1){

    // we need to do this task again and again so we can give it to the while loop
    // cout << node << " ";
    path.push_back(node);
    // everytime we will take this node in his parent
    node = parent[node];  
}
// normally it prints reverse - to make it normal we can push it into vector and than print the vectro reverse way
reverse(path.begin(), path.end());
for(int x : path){
    cout << x << " ";
}
    return 0;
}