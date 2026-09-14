#include<bits/stdc++.h>
using namespace std;

int par[105];
int grp_sze[105];

int find(int node){
    if(par[node] == -1){
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void  make_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(grp_sze[leader1] > grp_sze[leader2]){
        par[leader2] = leader1;
        grp_sze[leader1] += grp_sze[leader2];
    }else{
        par[leader1] = leader2;
        grp_sze[leader2] += grp_sze[leader2];
    }

}
int main()
{
    memset(par, -1, sizeof(par));
    memset(grp_sze, 1, sizeof(grp_sze));
    int n, e;
    cin >> n >> e;

    bool cycle = false;
    while (e--)     
    {
       int a, b;
       cin >> a >> b;

    //    find the leader of these two
    int leaderA = find(a);
    int leaderB = find(b);

    if(leaderA == leaderB)
    cycle = true;
    // break we can break here as it is taking input. if it gets similar result it will stop the loop before taking all the innputs which will give run time error

    else // if they are not same we will union them
    make_union(a, b);
    }
    

    // find();

    // make_union(1, 2);
    if(cycle) cout << "cycle detected" << endl;
    else cout << "No cycle" << endl;

    return 0;
}