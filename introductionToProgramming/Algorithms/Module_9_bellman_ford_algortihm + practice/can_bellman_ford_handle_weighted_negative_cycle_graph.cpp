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

int dst[1005];
vector<Edge>edg_list;

int n, e;
void bellman_ford(){
for (int i = 0; i < n - 1; i++)
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
    // we will run loop xtra one time to detect cycle - we just need inside loop we do not need outside loop as we just run for one time. we do not need that outer loop

    bool cycle = false;
      for(auto edge : edg_list){
        int a, b, c;
        a = edge.a;
        b = edge.b;
        c = edge.c;

        if(dst[a] != INT_MAX && dst[a] + c < dst[b])
        {
            // dst[b] = dst[a] + c; we do not need to update it
            // write a condition
            cycle =  true;
            break;
        }
    }
    

if(cycle){
    cout << "Negative weighted cycle detected\n";
}else{

//    so if we have not cycle than we will print it
    // cout << "No Negative weighted cycle detected\n";
    for (int i = 0; i < n; i++)
    
        cout << i << " -> " << dst[i] << endl;
    
}

// to detect a cycle exist here or not? we will run one time extra after running til n - 1. if it updates one after running to n - 1. it means there will be a cycle. if cycle exits here than it will not run extra one time. it will be stopped immediately there. if it updates after running n - 1 than we will understand that there is a cycle

    
};

int main()
{
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edg_list.push_back(Edge(a, b, c));
    }

    for (int i = 0; i < n; i++)
    {
        dst[i] = INT_MAX;
    }
    dst[0] = 0;

    bellman_ford();

    
    
    return 0;
}


// How it handel the infinit nature?
// here i we have given loop that how low it can run- it will run n-1 time. than it will be stopped. this loop will run 3 times. the main thing is not the answer rather it can stoped the infinite. which is the main issue. 
// but in the dijkstra algortihm why it falles in infinit loop - > this is because there hte condition was it will run untill the q is empty. so q will never be empty as it will continously push new child. and it will be minus and minus. this is why it can not be stopped