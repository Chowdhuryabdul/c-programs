#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj_list[10005];
long long int dst[1005];

void dijkstra(int src){
    priority_queue<pair<long long int,int>, vector<pair<long long int,int>>, greater<pair<long long int,int>>> pq;
    pq.push({0, src});
    dst[src] = 0;

    while (!pq.empty())
    {
        pair<long long int,int> par = pq.top();
        pq.pop();
        long long int par_dst = par.first;
        int par_node = par.second;
        for(auto child : adj_list[par_node]){
            int child_node = child.first;
           long long  int child_dst = child.second;

            if(par_dst + child_dst < dst[child_node])
            {
                dst[child_node] = par_dst + child_dst;
                pq.push({dst[child_node], child_node});
            }
        }
    }
    
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
    }
    
    int q; cin >> q;
    while (q--)
    {
        int src, dste;
        cin >> src >> dste;
        for (int i = 1; i <= n; i++)
        {
            dst[i] = LLONG_MAX;
        }
     
        dijkstra(src);
        if(dst[dste] == LLONG_MAX){
            cout << -1 << endl;
        }else
        cout << dst[dste] << endl;
    }
    
    return 0;
}