#include<bits/stdc++.h>
using namespace std;
vector <pair<int,int>> adj_list[105];
int dst[105];
void dijkstra(int src){
    // queue<pair<int,int>> q;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    // put distance first than node
    // pq.push({src, 0});
    pq.push({0, src});
    dst[src] = 0;
    while (!pq.empty())
    {
        pair<int,int> par = pq.top();
       pq.pop();

    //    also change here node in the second and distance int the first
        // int par_node = par.first;
        // int par_dst = par.second;
        int par_dst = par.first;
        int par_node = par.second;
        for(auto child : adj_list[par_node]){

            int child_node = child.first;
            int child_dste = child.second;
            if(par_dst + child_dste < dst[child_node]){
                dst[child_node] = par_dst + child_dste;

                // same her here distane first than node
                // pq.push({child_node, dst[child_node]});
                pq.push({ dst[child_node], child_node});
            }
        }


    }
    
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

// custom compare calss - can be used to set the value in pair. actually in pq it works on the first value in pair. but in the dijkstra, the value we want to work on it comes second in the pair. by this function we can bring that in the first and works