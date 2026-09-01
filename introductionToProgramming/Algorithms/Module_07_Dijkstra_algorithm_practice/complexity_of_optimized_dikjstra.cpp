#include<bits/stdc++.h>
using namespace std;
vector <pair<int,int>> adj_list[105];
int dst[105];
void dijkstra(int src){
  ;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
;
    pq.push({0, src});
    dst[src] = 0;
    while (!pq.empty()) // O(V)
    {
        pair<int,int> par = pq.top();
       pq.pop(); //O(LogV) - for pop the 1 value is LogV, so for the v number value will be O(VLogV). as it is under the while loop 

//    complexity of these whole code will be O(v+E). this is becaused these two loops are not nested. as second loop is not depended on the first loop. second loop dependent on the edge. it is same as bfs. here if one edge is relaxed for the one time than we will not do it later, as we have alredy relaxed with the shortest distance from pq. same as bfs if we visited one node than we will nto visit that node again. that is why there relation is not nested, rather inside loop is not dependent on the outside loop
        int par_dst = par.first;
        int par_node = par.second;
        for(auto child : adj_list[par_node]) // O(E) - it runs untill it has edges - it means coneection betwwen parent and child
        {

            int child_node = child.first;
            int child_dste = child.second;
            if(par_dst + child_dste < dst[child_node]){
                dst[child_node] = par_dst + child_dste;

           
                pq.push({ dst[child_node], child_node}); //O(LogV) so for the v number value will be O(ELogV). it is under the for loop as it's complexity is O(E), so it is complexity will be O(eLofV)
            }
        }


    }
    // so the total complexity will be O(VlogV + ELogV) - it we take logV as common than it will be LogV(v+e)
}
int main()
{
    int n,  e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b>> c;
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

// to push and pop in the pq it's order of complexity is O(LogN), because it sorts the whole q during pushing and popping. it uses heap data structure. 
// in the heap structure it always set the smallest value int eh root and if small comes lawer tha it sorts again and keep the samllest comes first. and it sorts and rearragne the whole tree. it s order of complexuty is O(LogN)