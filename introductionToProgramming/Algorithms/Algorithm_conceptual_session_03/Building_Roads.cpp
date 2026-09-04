#include<bits/stdc++.h>
using namespace std;
vector<int>v[10005];
bool vis [10005];

void dfs(int si){
    vis[si] = true;
    for(int child : v[si]){
        if(!vis[child]){
            dfs(child);
        }
    }

}
int main()
{
    int city, road;
    cin >> city >> road;
    while (road--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
int cnt = 0;
vector<int>number_city;
    memset(vis, false, sizeof(vis));
    for (int i = 1; i < city; i++)
    {
        if(!vis[i]){
            dfs(i);
            number_city.push_back(i);
            cnt ++;
        }
    }
    // as we know that we need 1 less than the number of city. it means we will keep count the the point of counting where we have called the dfs. if they are 4 city than we have called dfs in 2 point
    cout << cnt-1 << endl;

    // how to connect with each city
    // if there are 4 city we can imagin all from 0 index to end. so we will connect 0 to 1, 1 to 2 and rest
    for (int i = 0; i <number_city .size() - 1; i++)
    {
        // cout << i << " " << i + 1 << endl;
        cout << number_city[i] << " " << number_city[i + 1] << endl;
    }
    
    return 0;
}