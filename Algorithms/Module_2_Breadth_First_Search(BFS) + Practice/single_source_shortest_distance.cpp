#include<bits/stdc++.h>
using namespace std;
vector <int> edg_lst[1005];
bool vis[1005];

// to track the level we will take a level array
int level[1005];
void bfs(int src){
    queue<int> q;
    q.push(src);
    if(!vis[src])
     vis[src] = true;

    //  now we will make the level of source is 0, as we know the level of source usually 0
    level[src] = 0;
  
    while(!q.empty()){
        int par = q.front();
        q.pop();
        // cout << par << " ";

        for(int child : edg_lst[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;

                // i need to udate here level with child as we are accessing here child
                level[child] = level[par] + 1;


            }
        }
    }

}


int main()
{
   int n , e;
   cin >> n >> e;
   while(e--){
    int a , b;
    cin >> a >> b;
    edg_lst[a].push_back(b);
    edg_lst[b].push_back(a);
   }
   memset(vis, false, sizeof(vis));

//    at the start we are making all the level value  -1 than we will fix it
memset(level, -1, sizeof(level));

   int src , dst;
   cin >> src >> dst;
   bfs(src);

//    just cheking all the level
// for(int i = 0 ; i < n; i++){
//     cout << i << " -> " << level[i] << endl;
// }

// print level of destination Node
cout << level[dst] << endl;
    return 0;
}

// if we have given a destination which is not connected to the grpah than the value will return  - 1