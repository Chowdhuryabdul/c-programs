#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node, edge;
    cin >> node >> edge;

    // we will store each edge pair in the each index of the vector
    vector<pair <int, int >> edge_list;
    while(edge--){
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
    }

    // printing - we have taken it as pair that is why i have taken here pair
    // we can also use auto keyword whcih will easily detect that it is a pair
   
    // for(pair <int, int> p : edge_list)
    for(auto p : edge_list)
    {
        cout << p.first << " " << p.second << endl;;
    }
    return 0;
}