#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for ( int  i = n; i >= 1; i/=3) /* it is complexity is o(logN)
 */
    {
        cout << i << endl;
    }
    
    return 0;
}




   