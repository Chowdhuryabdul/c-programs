#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) /* the complexity of this code is o(srt(n)). it depends on the square root of input */
    {
        cout << i << endl;
    }
    
    return 0;
}

// it is very useful in case of divisor