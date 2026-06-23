#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n; /* time complexity- 0(1) - it is also called constant complexity */
    cin >> n;  /* time complexity- 0(1) */
    
    
    for (int i = 1; i < n; i+=2) /* time complexity- 0(n) */
    {
        cout << i << " ";
    }
    for (int i = 1; i < n; i++) /* time complexity- 0(n) */
    {
        cout << i << " ";
    }
    return 0; /* time complexity- 0(1) */
}

/* so what will be totalt compleixyt here?
o(n+n+4).
so we will ignore the 4 constant as in case of big input it will not make any difference.
so it will be - o(n+n) -->> o(2n). here we will be ignore the 2 as it is constant if it the value of n is 1 lakh, than compiler can run for the double for the 2n. so the final complexity is o(n) */