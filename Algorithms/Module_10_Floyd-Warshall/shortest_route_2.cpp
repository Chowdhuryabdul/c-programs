#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e, q;
    cin >> n >> e >> q;
   
    // we are using this matrix to take input and a distance array
//   to run the loop from 1 i have to increase the size of matrix
    long long  int adj_mat[n+5][n+5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == j){
                adj_mat[i][j] = 0;
            }else

            // as it is long long so we need to LLONG_MAX
            // adj_mat[i][j] = INT_MAX;
            adj_mat[i][j] = LLONG_MAX;
        }
        
    }
    
    while (e--)
    {
     long long int a, b, c;

    //  before taking input we have to compare the existing value in the c and coming value for the c from input. if existing value is 1 and coming value is 2. we supposed to take the minimum one to get the shortest path. but withou compare when another value come for the same spot we delete the existing one to make place for the new one. this creates problem to find the minimum value. so now we will compare to the current and coming one. the one will be minimum we will take that one. min(adj_mat[a][b], c) - adj_mat[a][b] it menas which value already there and c represnts the value i comming. among these we will take the minimum one. 
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c);
        adj_mat[b][a] = min(adj_mat[b][a], c);;
    }

   
//    int the question Node starts from 1 so i need to change from 0 to 1
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j] )
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
            
        }
        
    }
   
    
    // input query
    while (q--)
    {
        /* code */
        int src, dst;
        cin >> src >> dst;

    //    if we can not go from the src Node to dst Node. whhen we can not go whhile it's value will will be INT_MAX
        if(adj_mat[src][dst] == LLONG_MAX){
            cout << -1 << endl;
        }else 
        cout << adj_mat[src][dst] << endl;
    }
    
    
   
    
    return 0;
}


/* value of one edge cost in question is 10^9
it says in question we will have n^2 number edges and the value of N is 500
so it will be 250000
after adding 10^9 + 250000 = it will cross 10^9, so it can not hold in int value. so we have to change the int in long long int */