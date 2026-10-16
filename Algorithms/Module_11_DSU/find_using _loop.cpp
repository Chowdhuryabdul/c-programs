#include<bits/stdc++.h>
using namespace std;

// the is the leader array to track the leader
int par[1005];

// write a function to find - as parent is integer so it will be integer type - it will rcv a value or Node

int find(int node){
    while (par[node] != -1) // whenever it will be -1 we will stop it as -1 means i will be leader. ans the parent of node means index 4
    {
        /* code */
        cout << node << endl; // to see that it is working properly as parent 0f 4 is 5 his parent is 3 and parent of 3 is 1. this serial
        node = par[node];
    }
    return node;
    
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
    return 0;
}