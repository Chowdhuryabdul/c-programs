#include<bits/stdc++.h>
using namespace std;
int par[105];
int group_size [105]; // this size array will track which grp is bigger in size and it will track the size of each group
int find(int node){
    if(par[node] == -1){
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2){

    // first we need to find the parent these two nodes. which we can find by the find function

    int leader1 = find(node1);
    int leader2 = find(node2);

    // these two are leaders. now we are making union, so they will be one group. when they will be one group they must have one leader. which one will be leader, the one will be leader based on the size of that group. so after union the leader will be from bigger group 

    if(group_size[leader1] > group_size[leader2]) // it means leader1 will be leader and leader 2 will quite the leadership. if both are same than if we want to keep leader1 as leader than we can add just = with the comparison sign. but if we do not do this than leader2 will be automatically leader according to the comparison. 
    {
        // so parent of leader 2 will be parent 1
        par[leader2] = leader1;

       // After making union of 2 groups. 1 is 3 and 2nd is 2. so when it will be merged there will be one group which size will be 5 and leader will be the leader of the group 1. so we need to increase the size of group. so we will add group size of ledar 2 with leader one group
       group_size[leader1] += group_size[leader2];

    }
    else
    {
        par[leader1] = leader2;

       // After making union of 2 groups. 1 is 3 and 2nd is 2. so when it will be merged there will be one group which size will be 5 and leader will be the leader of the group 1. so we need to increase the size of group. so we will add group size of ledar 2 with leader one group
       group_size[leader2] += group_size[leader1];
    }
}
int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size)); //why make 1? as at the beginning every one itslef a group
   

    // we will call union function to make union between two nodes
    dsu_union(1, 2);
    dsu_union(2, 0);
    dsu_union(3, 1);
    // cout << find(4) << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << i << " -> " << par[i] << endl;
    }
    
    return 0;
}