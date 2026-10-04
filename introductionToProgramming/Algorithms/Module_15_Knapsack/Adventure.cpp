#include<bits/stdc++.h>
using namespace std;

 int val[1005], weight[1005];


 int  knapsack(int i, int mx_weight) 
{
    
    if(i < 0)
    return 0;

    
    if(mx_weight <= 0)
    return 0;

  
        
        if(weight[i] <= mx_weight)
        {
        
        int option_1 = knapsack(i-1, mx_weight - weight[i]) + val[i];

        int option_2 = knapsack(i-1, mx_weight);

      return max(option_1, option_2);
        }
        else 
        {
            
          int option_2 = knapsack(i-1, mx_weight);
            return option_2; 
            
        }
        
 };
int main()
{
    int t; cin >> t;
    while (t--)
    {
     int n; cin >> n;
    int mx_weight;  cin >> mx_weight;
    
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
  
     for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    // memset(dp, -1, sizeof(dp));
    cout << knapsack(n-1, mx_weight) << endl;
    }
    
    return 0;
}