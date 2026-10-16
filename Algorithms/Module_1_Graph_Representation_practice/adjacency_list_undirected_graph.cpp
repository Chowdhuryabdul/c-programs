#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node, edge;
    cin >> node >> edge;

    // to store the nodes - it is called array of vector
    vector<int>adj_list[node];

    // take the connection
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); //this linne is for the undirected graph
    }

    // to print - first we need to run a loop on array
    for (int i = 0; i < node; i++)
    {
        cout << i << " - > ";
        // to print vector we will run annother loop - we have run ranged based loop and take the vector from the index of array
       for(int x : adj_list[i]){
        cout << x << " ";
    }
    cout << endl;
}
    return 0;
}