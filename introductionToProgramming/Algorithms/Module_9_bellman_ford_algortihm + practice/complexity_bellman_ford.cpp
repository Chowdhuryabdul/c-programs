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
 
// we do not need to think about space complexity as we do not take extra space here apart from this dst array

int dst[105];   // 0(V)
 vector<Edge>edg_list;
     int n, e;
void bellman_ford(){
  
 for (int i = 0; i < n-1; i++)  //- 0(V) - it will run relative to the number of vertices
 {
  
    for(auto edge : edg_list)  //- 0(E)
    
    // so these two loop are nested. as inside loop is going to every edges. we do not check this as it is visited or not. if visited than we will not go. rather we are going to the every edges. so it will be 0(VE). as they are in the nested order. we are going to every Node, if we can update, than update otherwise we come back.
    {
     
        int a, b , c;
        a = edge.a;
        b = edge.b;
        c = edge.c;

 
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

        edg_list.push_back(Edge(a, b, c));
    }
    
 

    // we will set int_max for every value
    for (int i = 0; i < n; i++)
    {
        /* code */
        dst[i] = INT_MAX;
    }
  
    dst[0] = 0;
    

 

bellman_ford();
//  print the dist array
for (int i = 0; i < n; i++)
{
    cout << i << " -> " << dst[i] << endl;
}

    return 0;
}


