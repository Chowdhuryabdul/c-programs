#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:
    int a, b, c;
    Edge(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
vector<Edge>edg_list;
int dst[1005];
int n, e;

void bellman_ford()
{
 for (int i = 0; i < n-1; i++)
 {
    for(auto edge : edg_list){
    int a, b, c;
    a = edge.a;
    b = edge.b;
    c = edge.c;

    if(dst[a] != INT_MAX && dst[a] + c < dst[b]){
        dst[b] = dst[a] + c;
    }
 }
 }
 
};

int main()
{
    cin >> n >> e;
    while (e--)
    {
        /* code */
        int a, b, c;
        cin >> a >> b >> c;
        edg_list.push_back(Edge(a, b, c));
        edg_list.push_back(Edge(b, a, c));

    }

    for (int i = 0; i < n; i++)
    {
        dst[i] = INT_MAX;
    };

    dst[0] = 0;

    // for(auto edge : edg_list){
    //     cout << edge.a << " " << edge.b << " " << edge.c << endl;
    // }

    bellman_ford();
    
    for (int i = 0; i < n-1; i++)
    {
        cout << i << " -> " << dst[i] << endl;
    }
    
    
    return 0;
}