#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++) this is system is obsolet as it is not optimized. to get the divisors of 36 we need to do operations 8 times. but we can make 6 times by sqrt(n). we will try that now

    
    for (int i = 1; i <= sqrt(n); i++) /* the complexity of this code is o(sqrt(N)) */

    for (int i = 0; i*i < n; i++) /* it is also square root of n */
   
    
    
    {
        if(n % i == 0){
            cout << i << " " << n/i << " ";
        }
    }
    
    return 0;
}


/* So we do not need to run the loop until n means the value of n. rather we can run until sqaure root n. here 6 is the square root of 36. so we can run until 6. so that means we need to run the loop 1, 2, 3, 4, 6. but the total divisor is 1, 2, 3, 4, 6, ,9, 12, 18, 36.

So if i run loop until square root 6-

first i will get 1 if is divide the 36 by 1 than i will get divisor 36.
next 2, if i divide 36 by 2 than i will get 18 which is another divisor

next 3, if i divide 36 by 3 than i will get 12, which is another divisor
 */