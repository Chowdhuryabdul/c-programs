#include<bits/stdc++.h>
using namespace std;
vector<int>edg_list[1005];
bool vis[1005];

void bfs(int src) // insdie the bfs function we are just taking one extra queue as space. and this will take space equal to number of Nodes. so its space complexity will be O(V)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) // O()- the complexity of the this loop is o(N) - as this loop will run equivalent to the number of Nodes. here N is total of number of the Nodes
    {
        /* code */
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for(int child : edg_list[parent]) // it is complexity will be O(E)- it is bit complex and it will run for the time based on the edges in worse case scenerio. if there are 4 edges in the graph than it will run for the 4 times in worse case scenerio. may be it can run less time. the worse case scenerio is if each node has one connection to each. and loop will run for the one time for each edge.
        {
            if(!vis[child]){

                q.push(child);
                vis[child] = true;
            }
        }
    }
    
}
// relationship betwee these upper two loop is not nested. as inner loop is not dependent on the outer loop in case of round. inner loop is more dependent on its inner condition. but in normal context if one loop come inside another loop. the inner loop usually depends on the outer loop in case of run number. but here is the different as inner loop dependent on its inner condtion. here the out loop run 10 times does not mean that inner loop will run 10. no it will run based on the inner condition. so they are not in a nested condition. we can not sa that O(N*E). its complexity will be O(N+E). the number nodes and number of edges can be different in all th time. actually those we are says nodes actually they are called vertecs. so it is common to get O(v+N)
int main()
{
    int node, edge;
    cin >> node >> edge;
    while(edge--){
        int a , b;
        cin >> a >> b;
        edg_list[a].push_back(b);
        edg_list[b].push_back(a);
    }
    memset(vis,  false, sizeof(vis));
    bfs(0);
    return 0;
}