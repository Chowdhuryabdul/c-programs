#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int fibo[n + 1]; // why we take 1 extra? this is because value of fibonacci starts from the 0

    // as we know the value of 0 is will be 0 and 1 is 1 in the fibonacci. it needs to set in the manual
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++) // why run from 2? this is becaus 0 and 1 is fixed
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2]; 
    };
   
    // we need to find the fibonacci of nth mnumber
    cout << fibo[n] << endl;
    return 0;
}