#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) /* the complexity of this code is o(n) */
    {
        for (int j = 1; j < n; j*=2) /* the complexity of this code is o(logN) */
        {
            /* code */
            cout << "Hello" << endl;
        }
        
    }
    
    return 0;
}


// it is also called order of NlogN.
// now it is  - o(N * logN) --> o(NlogN)
