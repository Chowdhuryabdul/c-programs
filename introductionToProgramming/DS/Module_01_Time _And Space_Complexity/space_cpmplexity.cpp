#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; /* - O(1) */
    cin >> n; /* - O(1) */
    int sum = 0; /* it*s space complexity is O(1) */

    for (int i = 0; i < n; i++) /* it is space complexity is O(1), this is becuase it will not create any value each time when we run the loop */
    {
        sum += i;
    }
    cout << sum << endl;
    
    return 0;
}