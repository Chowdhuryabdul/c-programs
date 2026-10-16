#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n; 
    cin >> n; 
    
    
    for (int i = 1; i < n-1; i++) /* here we will ignore - 1 constant as if the value of n is i billion than - 1 does not make any differencce. */
    {
        cout << i << " ";
    }
    return 0;
}