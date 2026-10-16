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

vector<Edge> edg_list;
long long int dst[1005];
int n, e;
 bool cycle = false;

void  bll_man(int src){
    for (int i = 0; i < n-1; i++)
    {
       for(auto edge : edg_list){
        int a, b, c;
        a = edge.a;
        b = edge.b;
        c = edge.c;
        if(dst[a] != LLONG_MAX && dst[a] + c < dst[b]){
            dst[b] = dst[a]+ c;
        }

       }
    }

   
    for(auto edge :  edg_list){
         int a, b, c;
        a = edge.a;
        b = edge.b;
        c = edge.c;
        if(dst[a] != LLONG_MAX && dst[a] + c < dst[b]){
            cycle = true;
            break;
        }

    }
   
     if(cycle){
        cout << "Negative Cycle Detected";
        
    } else{
int t;
 cin >> t;
 while (t--)
 {
    int d;
    cin >> d;   

    

    if(dst[d] == LLONG_MAX){
        cout << "Not Possible" << endl;
    }else
    {  
            cout << dst[d] << endl;   
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



int src;
cin >> src;

 for (int i = 1; i <= n; i++)
 {
    dst[i] =LLONG_MAX;
 }


dst[src] = 0;


 bll_man(src);
 

    return 0;
}