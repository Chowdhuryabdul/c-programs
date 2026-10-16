#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105];
// store the distance from src to each node in this array
int dist_array[105];

void dijkstra(int src){
    queue<pair<int,int>> q;
    // this 0 we push and rest of them will calculate automatically
    q.push({src, 0});

    // make the distance of soruce 0
    dist_array[src] = 0;

    while (!q.empty()){
    pair<int, int> par = q.front();
    q.pop();

    // since there are two things in the pair we can seperate it two work
    int par_node = par.first;
    int par_dist = par.second;


        // we have written here auto as our int type will be pair<int,int>>. 
        for(auto child : adj_list[par_node]){
           
        //    the first and second value of child pair
            int child_node = child.first;
            int child_dist = child.second;

            // we will check to path relaxation. if possible we will push 
            if(par_dist + child_dist < dist_array[child_node]){
                dist_array[child_node] = par_dist + child_dist;

                q.push({child_node, dist_array[child_node]});
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
        cin >> a>> b >>c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    // we will not use the memset rather we use loop to set the max value for distance array
    // memset(dist_array, INT_MAX, sizeof(dist_array));
    // memset can not work with the INT_MAX. it will print -1
    
    // set max value for the dist array
    for (int i = 0; i < n; i++)
    {
        dist_array[i] = INT_MAX;
    }
    
    
    dijkstra(0);

    // print the shortest distance to go all the Nodes
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dist_array[i] << endl;
    }
    return 0;
}

/* In the pair
first value is Node 
second value is it's distance */