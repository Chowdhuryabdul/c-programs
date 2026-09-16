#include<bits/stdc++.h>
using namespace std;
int par[100005];
int grp_size[100005];
int component ;
int mx_size ;

int find(int node){
    if(par[node] == -1){
        return node;
    }

    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void union_dsu(int node1, int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);

    // to detect cycle - it means whenever it will detect a cycle than number of components will not decrease.
    if(leader1 == leader2){
        return; 
    }

//    here afteer unionn grp size is increasing and decreasing
    if(grp_size[leader1] > grp_size[leader2]){
        par[leader2] = leader1;
        grp_size[leader1] += grp_size[leader2]; // here group size of leader1 is increasing, so we can give the maz size.
        // we can give the grpup size here to get the max value - but in the max - it can have a bigger variable already. so to get the max one we can give both maz and grp_size[leader1]
        mx_size = max(mx_size, grp_size[leader1]);


    }else{
        par[leader1] = leader2;
        grp_size[leader2] += grp_size[leader1];
        mx_size = max(mx_size, grp_size[leader2]);
    }

    // as we have logic after each union the number of component will decrease. as we had 5 seperate city at the beginning, but by making uinon two, so now total componnent will be 4
    component --;
}
int main()
{
    int n, e;
    cin >> n >> e;
    component = n; // as city is the component at the beginning
    mx_size = 1;
    // memset(par, -1, sizeof(par));
    // memset(grp_size, 1, sizeof(grp_size)); - these does not work

    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        grp_size[i] = 1;
    }
    
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // whenever we take we will give this to the union function to make union
        union_dsu(a, b);

        // after everytime union we can print the number of compnent and the max size
        cout << component << " " << mx_size << endl;

    }

    /* for (int i = 1; i <= n; i++)
    {
        cout << i << " " << par[i] << " " << grp_size[i] << endl;
    } */
    

    return 0;
}