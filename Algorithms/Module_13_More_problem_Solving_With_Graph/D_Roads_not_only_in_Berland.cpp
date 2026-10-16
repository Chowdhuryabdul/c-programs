#include<bits/stdc++.h>
using namespace std;
int par[1005];
int grp_size[1005];

int find(int node){
    if(par[node] == -1){
        return node;
    };
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);

    
    if(grp_size[leader1] > grp_size[leader2]){
        par[leader2] = leader1;
        grp_size[leader1] += grp_size[leader2];
    }else{
        par[leader1] = leader2;
        grp_size[leader2] += grp_size[leader1];
    }
}

int main()
{
    
    int n; cin >> n;
      for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        grp_size[i] = 1;
    }

    // take vector to sotre those roads which will discaredd- data type will be pair that we are storing edges in the vector. we also need to store this data to print later
    vector<pair<int,int>> remove_road;

    // this vector will helps us to store the build of a new road
    vector<pair<int,int>> creat_road;
    for (int i = 0; i < n-1; i++)
    {
         int a, b;
        cin >> a >> b;
         int leader1 = find(a);
        int leader2 = find(b);
        if(leader1 == leader2) // it means it is cycle so we need to break or remove this road. so we can keep it to the vector to future use
        
        {
            // this will remvoe the and pushh to vecotor
            remove_road.push_back({a, b});

        }else{

            dsu_union(a, b);
        }
    }
    
   
    // creation of road
    // whhy 2? - this is becasue we have already taken 1 in our consideration
    for (int i = 2; i <= n; i++)
    {
        int leader1 = find(1); // the number 1 node is fixed
        int leader2 = find(i); // it will come from the i-th node

        // if leader same they are connected. if not than we have to connect
        if(leader1 != leader2){
            creat_road.push_back({1, i});

            // when we find that they are not connected. we immediately make the road by union. otherwise it will chekc all nodes and store the different pair, but will not make connection

            dsu_union(1,i);
        }
    }
    
    // print the size fo remove or create as both are same
    cout << remove_road.size() << endl;

    // will run a loop to print the pair of remove
    for (int i = 0; i < remove_road.size(); i++)
    {
        cout <<remove_road[i].first << " " << remove_road[i].second << " " << creat_road[i].first << " " << creat_road[i].second << endl;
    }
    

    // for(auto par : remove_road){
    //     cout << par.first << " " << par.second << endl;
    // }
    // for(auto par : creat_road){
    //     cout << par.first << " " << par.second << endl;
    // }
    return 0;
}