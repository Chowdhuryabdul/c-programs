#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, e;
   cin >> n >> e;
   int adj_mat[n][n];

//    all the value of adj mat will be infinit before taking input
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
    //    we will set diagonal 0
       if (i == j){
        adj_mat[i][j] = 0;
       }else
        adj_mat[i][j] = INT_MAX;
    }
    
}

   while (e--)
   {
    int a, b, c;
    cin >> a >> b >>c;

    // store the c in a row and b col
    adj_mat[a][b] = c;

    // it is applicabe to undirected graph
    // adj_mat[b][a] = c;

   }


//    loop to implement floyd
// this loop to set from 0 to 3 in between i and j. why we have given this loop outside. as based on the value of k we have run those loops. for example for 0 we will run those loops, for 1 we will run those loop. it means the outer loop dicatet the insider.
for (int k = 0; k < n; k++)   // O(N)
{
    /* code */
    //  going from one to another Node
for (int i = 0; i < n; i++)   // O(N)
{
    for (int j = 0; j < n; j++)     // O(N)
    {
        /* code */
        // print i and j to check whether we have gone to each Node
        // cout << i << " " << k << " " << j << endl;

        // now is the condition
        // here three part - from i to k and from k to j - this is via k
        // last part - from i to j - this is direct
        // if via is better than direct than we will update
        // why i need to check int max - this is beause if it is int max and we add two int max than it will be very big number which will destrroy th solution. as we have already set all the valeu int max
        if(adj_mat[i][k] != INT_MAX  && adj_mat[k][j] != INT_MAX && adj_mat[i][k] +  adj_mat[k][j] < adj_mat[i][j]){
            adj_mat[i][j] = adj_mat[i][k] +  adj_mat[k][j];
        }
    }
    
}
}



//    print the adjacency mat
   for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
       if(adj_mat[i][j] == INT_MAX){
        cout << "INF ";
       }else
        cout << adj_mat[i][j] << " ";;
    }
    cout << endl;
    
}
    return 0;
}


// its total complexity is O(V^3)