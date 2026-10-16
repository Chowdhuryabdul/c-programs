#include<bits/stdc++.h>
using namespace std;


int par[1005];



int find(int node) // O(logN) which is very good
{

    // cout << node << endl;
    if(par[node] == -1){
        return node;
    }

    // call the recursion function
   int leader = find(par[node]);

//    to set ultimate parent in each node when it come back- we just saved here the parent so we do not go back to find the parent
    par[node] = leader;
   return leader;


  
   
    
}

int main()
{
    
    // make the all leader or parents -1
    memset(par, -1, sizeof(par));

    // we have make the leader manually as we do not learn yet the uion
    par[0] = 1;
    par[1] = -1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    cout << find(4) << endl;

    // we want to see the each node and it's parent
    for (int i = 0; i < 6; i++)
    {
        cout << i << " -> " << par[i] << endl;    }
    
    return 0;
}