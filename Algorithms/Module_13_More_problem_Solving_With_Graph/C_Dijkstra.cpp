#include<bits/stdc++.h>
using namespace std;

// we can define long long int as ll - so all the plces with int we can wirte ll
#define ll long long int
ll dst[100005];
ll parent[100005];
vector<pair<ll,ll>> adj_list[100005];

void djikstra(ll src)
{
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
    pq.push({0, src});
    dst[src] = 0;
    while (!pq.empty())
    {
        pair<ll,ll> par = pq.top();
        pq.pop();
        ll par_dst = par.first;
        ll par_node = par.second;
        for(auto child : adj_list[par_node]){
            ll child_node = child.first;
             ll child_dst = child.second;
             if(par_dst + child_dst < dst[child_node]){
                dst[child_node] = par_dst + child_dst;
                pq.push({dst[child_node], child_node});
                // to track the parent
                parent[child_node] = par_node;
             }
        }
    }
    

}
int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
    }
    
    for (ll i = 1; i <= n; i++)
    {
        dst[i] = LLONG_MAX;
        parent[i] = -1;
    }
    
    djikstra(1);

    
    // to chekc the dst is visited or not. if not than it will -1
    // distance is n according to the question
    if(dst[n] == LLONG_MAX){
        cout << -1 << endl;
    }else // path printing
    
    {

    //    to print the path we need to take a node which will start from destination
    ll node = n;
    
    // take a vector to store the visited node along the path from src to dst to print later
    vector<ll>path;

    // we will run while until the destinaion node is -1
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    
    // int vectro it comes reverse so can just print it right  order
    // first reverse the path
    reverse(path.begin(), path.end());
    for(auto node : path){
        cout << node << " ";
    }
    cout << endl;
    }
    return 0;
}