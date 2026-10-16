#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for ( int i = 0; i < n; i++) /* 0(N) */
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++) /* 0(q) */
    {
        int x;
        cin >> x;
        int flag = 0;
        for (int i = 0; i < n; i++) /* 0(N) */
        {
            if (a[i] == x){
                flag = 1;
            }
        }
       if(flag == 1){
        cout << "found" << endl;;
       } else{
        cout << "Not found" << endl;
       }
        

    }
    
    return 0;
}

// O(N) + O(q*N) - among them the second one is worse - the value of q is 10^5 and the value of n is 10^5 and totla will be 10^10 - but compiler can run upto 10^7.