#include<bits/stdc++.h>
using namespace std;
vector<int> edg_list[1005];
bool vis[1005];
void dfs(int src){
    // base case
 
    // we do not need any base case here - this is because as we have track the visit of every Nodes. so any Node will not be called twice. it means dfs function will be stopped after calling eachh nodes every time, as we have give the condition that visist of child is false in that case just call the function. if they are already visited then do not call the function. that is why we do not need to set any base case where to stop the function

//  print
cout << src << " ";
vis[src] = true;

for(int child : edg_list[src]) // if ii go to the index src of edg_list, we will get a vector where we will get all the node of this src index
{
if(vis[child] == false)
dfs(child);

}

}
int main()
{
    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b; cin >> a >> b;
        edg_list[a].push_back(b);
        edg_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}