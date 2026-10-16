#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 2;
    for ( int i = 1 ; i < n; i++) /* althoug it seems here linear log, but is logarithmic compleixity. because of the increment by 2 after printing. it is complexity is o(logN)
 */
    {
        cout << i << endl;
        i = i*k;
    }
    
    return 0;
}

/* it is base is 2 as we know that increament or decrement will be relative to the number. here the value of k is 2 so the base is 2. 0(log2N) */





   