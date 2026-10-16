#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105];
int dst[105];
 void  dijkstra(int src){
    queue<pair<int,int>> q;
    q.push({src, 0});
    dst[src] = 0;
    while (!q.empty()) // O(v)
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_node = par.first;
        int par_dst = par.second;
        for(auto child : adj_list[par_node]){ // O(E)
            int child_node = child.first;
            int child_dst = child.second;
            if(par_dst + child_dst < dst[child_node]){
                dst[child_node] = par_dst + child_dst;
                q.push({child_node, dst[child_node]});
            }
        }
    }
    
 }
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--) // O(v)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
      dst[i] = INT_MAX;

    }
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dst[i] << endl;
    }
    
    
    return 0;
}

// in the bfs complexity was O(V+E). as if one node is visited we did not visit that again. 
// but in the dijksttra we visit one Node multipls times. so it is complexity will be O(VE). this is because we need to go to the every Node for the every v. each Node can visit each Node to do the relaxation. so it means as many nodes are there that many time will be one node visited. it is so bad complexity. if in question it gives the valye of v 10^5 and value of e is 10^5 - so it will be total 10^10. it is not possible to run within 1 second