#include<bits/stdc++.h>
using namespace std;

int dp[1005];
int fibo(int n){
    if(n == 0 || n == 1)
    return n;

    
    
    
    // one thing i also need to check that the value i need which is alredy saved or not. if it is -1 it is not saved. if not than the value is saved. if 2 is previosuly called it means it's value is alredy saved in dp array. so that is wy i need to chek it otherwise it will call again.
    if(dp[n] != -1)
    return dp[n];
    // Now the question to save the value after getting. where we get the reuslt. we get the result here - fibo(n - 1) + fibo(n - 2). after getting the value we have to save it in dp array. if we get the result 2 we will save it in the 2nd index of dp array. if result is 5 than we will save it to the 5th index of dp array. like this

    dp[n] = fibo(n - 1) + fibo(n - 2); // here we are just calling
    return dp[n];
}
int main()
{
    // at the start all the value will be -1
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}