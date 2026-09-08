#include<bits/stdc++.h>
using namespace std;



class Edge
{
    public:
    int a,b,c;
    Edge(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
int dst[105];
 vector<Edge>edg_list;
     int n, e;
void bellman_ford(){
    //  this loop will run n - 1 time to relax all the node 
 for (int i = 0; i < n-1; i++)  //- 0(V)
 {
   // will take edge from the edge list and will relax it. every time we will take one edge
    for(auto edge : edg_list)  //- 0(E)
    
    {
        // by the auto - it is a edge here. it comes here as an object. so we need to take out the value from the edge
        int a, b , c;
        a = edge.a;
        b = edge.b;
        c = edge.c;

        // logic to path relaxation
        if(dst[a] != INT_MAX && dst[a] + c < dst[b]){
            dst[b] = dst[a] + c;
        }
    }
 }
}
int main()
{

    cin >> n >> e;
   
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // pused the a b c in the vector - we have pused it by calling the constructor
        edg_list.push_back(Edge(a, b, c));
    }
    
    // print the edge_list to see how it works - the data type of for loop will be auto as we will get object each time from vector, so we will give data tye auto

   /*  for(auto edge : edg_list){
        cout << edge.a << " " << edge.b << " " << edge.c << endl;
    } */

    // we will set int_max for every value
    for (int i = 0; i < n; i++)
    {
        /* code */
        dst[i] = INT_MAX;
    }
    // all will not be int max, the distane of source will be 0. why we are doing it after for loop. this is because if we do it before than loop will run and will make the 0 int max
    dst[0] = 0;
    
// //  this loop will run n - 1 time to relax all the node 
//  for (int i = 0; i < n-1; i++)
//  {
//    // will take edge from the edge list and will relax it. every time we will take one edge
//     for(auto edge : edg_list){
//         // by the auto - it is a edge here. it comes here as an object. so we need to take out the value from the edge
//         int a, b , c;
//         a = edge.a;
//         b = edge.b;
//         c = edge.c;

//         // logic to path relaxation
//         if(dst[a] != INT_MAX && dst[a] + c < dst[b]){
//             dst[b] = dst[a] + c;
//         }
//     }
//  }
 

bellman_ford();
//  print the dist array
for (int i = 0; i < n; i++)
{
    cout << i << " -> " << dst[i] << endl;
}

    return 0;
}



// whole input list will be in a vector
// we need to take pair of pair to hold 3 value
// pair<int,pair<int,int>> - we need to store the 3 value. so 
// this is one way 
// another way we can do it by class