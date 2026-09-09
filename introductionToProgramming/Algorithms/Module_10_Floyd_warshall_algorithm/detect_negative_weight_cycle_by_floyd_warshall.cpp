#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][e];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(i == j){
            adj_mat[i][j] = 0;
           }else
            adj_mat[i][j] = INT_MAX;
        }
        
    }
    
    while (e-- )
    {
       int a, b, c;
       cin >> a >> b >> c;
       adj_mat[a][b] = c;
    }


    // why it does not fall infinite loop? this is because all the loops here run n time
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(adj_mat[i][k] != INT_MAX && adj_mat[k][j] != INT_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]){
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                } 
            }
            
        }
        
    }

     // to check cycle

    bool cycle = false;
    for (int i = 0; i < n; i++) // why we do not run nested loop this is because we have just chekcd the diagonal part. when i = 0 we have chekced 00 when i= 1 we have checkd 11 and to the end.
    {
        if(adj_mat[i][i] < 0) // if 00 11 22 get smaller than 0
        {
            cycle = true;
        }
    }

    if(cycle){
        cout << "Negative cycle detected" << endl;
    }else{

        // if cycle is not there than we will print normllly
         for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(adj_mat[i][j] == INT_MAX)
            {
                cout << "INF ";
            }else
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
        
    }
    }
    
   
    

   
    
    return 0;
}