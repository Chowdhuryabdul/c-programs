#include<bits/stdc++.h>
using namespace std;
int dp[1005];
int fibo(int n){
    if(n == 1 || n == 2) // our fibonacci starts from 0 and 1 but here it says stair which starts from 1 and 2. so here base case 1 2 
    return n;

    if(dp[n] != -1)
        return dp[n];

    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
};

int main()
{
    int n; cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fibo(n);
    return 0;
}