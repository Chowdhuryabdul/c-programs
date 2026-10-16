#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for ( int  i = 1; i < n; i*=2) 

    {
        cout << i << endl;
    }
    
    return 0;
}

/* here it is not order of o(n), in order of n, it used to be run relative to the value of n. if value of n i s10, than it will run of the 10 time. but if is i*=2- than it will run for 3 times. so imagine if the value is 1000, than it will run only 10 times to finnish the work. so see the gap between in the operation times between o(n) and o(logN).

how we know that it is logerithmic compelixity?
if the increment in the loop increase of decrease by multiple or divide thant it will logerithmic complexity

if the increment is done by the add or subtract than it is called linear complexity.
*/




   