#include<bits/stdc++.h>
using namespace std;

// the is the leader array to track the leader
int par[1005];

// write a function to find - as parent is integer so it will be integer type - it will rcv a value or Node

int find(int node) // 0(N) - to go to the one Node it's complexity is O(N). if we need to go N-number nodes than complexity will be O(N^N) whic is so bad
{

    cout << node << endl;
    if(par[node] == -1){
        return node;
    }

    // call the recursion function
   int leader = find(par[node]);
   return leader;


    // one thing we have written same condition in while loop and in the base case. in the while loop it was != but in the base case it is ==. why? in case of while loop we have give the condition when while loop will run, so it will ru until it gets -1. but in the recursion i have given whenever it will get -1 it will be stopped. 
   
    
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