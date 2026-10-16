#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int node_nmbr, edge_nmbr;
    cin >> node_nmbr >> edge_nmbr;

    int adj_mat [node_nmbr][node_nmbr];
    memset(adj_mat, 0, sizeof(adj_mat));

    for (int i = 0; i < node_nmbr; i++)
    {
        for (int j = 0; j < node_nmbr; j++)
        {
           
           if(i == j) adj_mat[i][j] = 1;
        }
        
    };


    for (int i = 0; i < edge_nmbr; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        
    }

    for (int i = 0; i < node_nmbr; i++)
    {
        for (int j = 0; j < node_nmbr; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    };
    
    return 0;
}