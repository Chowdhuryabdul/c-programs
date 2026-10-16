#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for ( int  i = 0; i < n; i++) /* its complexity is o(n) */
    {
        cout << i << endl;
    }
    
    return 0;
}


/*
 for ( int  i = 0; i < n*2; i++)  its complexity is o(n) then i will run for douldbe. so if compiler can run for the 100 times it can easily run for the 200. if i give the n/2 - it can run half times and it still the same */
   