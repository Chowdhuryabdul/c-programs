#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    // i have an array of vector, in every index of array i have vector where we store the related Nodes together. now we have to store the weight with the related nodes so it will be pair. that is why we have stored pair
    vector<pair <int,int>> adj_list[n];
    while (e--)
    {
        // it means the weight to go from a to b is c
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});

    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " - > " ;
        // we know that each index contain a vector. to print vector we need a loop. in the vector there is value whic are in pair. so we can run a range based loop with pair. we can also do it with auto keyword which will automatically detect the data type
        
        // for(pair<int,int> p : adj_list[i])
        for(auto p : adj_list[i])
        {
            cout << p.first << " " << p.second << ", ";
        }
        cout << endl;
    }
    
    
    return 0;
}