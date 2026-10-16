#include<bits/stdc++.h>
using namespace std;

int dp[100005];
int fibo(int start, int target)

{
    if(start == target) return 1;
    
    if(start > target) return 0;

    if(dp[start] != -1) return dp[start];

    int opt_1 = fibo(start + 3, target);
    int opt_2 = fibo(start * 2, target);
    return dp[start] = opt_1 || opt_2;
    
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
    int n; cin >> n;
    memset(dp, -1, sizeof(dp));

    int number = fibo(1, n);
    if(number == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
   }
   
    return 0;
}