#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node_nmbr, edge_nmbr;
    cin >> node_nmbr >> edge_nmbr;

    // need to give a adjacency matris to store the value
    int adj_mat [node_nmbr][node_nmbr];

    // then all the value of the box will be 0 - we need to run a nested loop- one for the row and another for the col
    
    // this is longer bersjon
   /*  for (int i = 0; i < node_nmbr; i++)
    {
        for (int j = 0; j < node_nmbr; j++)
        {
            adj_mat[i][j] = 0;
        }
        
    } */

    // this is the short verson shortcut versionn of this
    // inside the function will tell - whose memory want to set- this is adjacency memory, then we will say what we want to keep. we want to keep all the value 0. then we have to say hoe many will be 0. if all than we have to say the size
    memset(adj_mat, 0, sizeof(adj_mat));

    // to see all the valus is 0 or not
    //  for (int i = 0; i < node_nmbr; i++)
    // {
    //     for (int j = 0; j < node_nmbr; j++)
    //     {
    //         cout << adj_mat[i][j] << " ";
    //     }
    //     cout << endl;
        
    // }
    
    // to make all the value in diagonal will be 1, which we can do by own as we know it will be 1 
    for (int i = 0; i < node_nmbr; i++)
    {
        for (int j = 0; j < node_nmbr; j++)
        {
            /* code */
            if(i == j){
                adj_mat[i][j] = 1;
            }
        }
        
    }
    

    // then it is given a connection numbers. this nmbers depends on teh edge_nmbr
   for (int i = 0; i < edge_nmbr; i++)
   {
    /* input the connections */
    int a, b;
    cin >> a >> b;
    // next work is a row er b colum k 1 kore ditam. it says will do 1 a number row and b number col
    adj_mat [a][b] = 1;

    // we will do it reverse as it is undirected - so it can be 0 1 and 1 0. here we habe done b row and a col.
    // if it is directed graph than we do not need just this line
    adj_mat[b][a] = 1;

   }

    for (int i = 0; i < node_nmbr; i++)
    {
        for (int j = 0; j < node_nmbr; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
        
    }
   
    
    return 0;
}