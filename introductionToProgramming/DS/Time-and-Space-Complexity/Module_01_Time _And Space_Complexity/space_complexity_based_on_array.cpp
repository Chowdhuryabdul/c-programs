#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; /* -space complexity is O(1) */
    cin >> n >> m;
    int a[n]; /* it is space complexity is O(N) */

    // in case of 2dr array
    int a[n][m]; /* in this case it will be O(N*M) */
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    return 0;
}