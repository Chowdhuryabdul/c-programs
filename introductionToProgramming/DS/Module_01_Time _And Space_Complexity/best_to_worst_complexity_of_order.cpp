#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "hello" ; /* O(1) */


    return 0; /* O(1) */
}

// it supposed to me o(1+1) - o(2). but it will be 1 as computere calculate it as one. this is because computer will take same to execute 1 and 2 line


/* if N = 1000---->>>

constant : O(1) --> 1 - if the value of n is 1000, but it will run just for the one time -- this is number 1
Linear: O(N) --->  1000 - if the value of n is 1000, but it will run just for the 1000 time -- this is number 4
Logarithmic: O(logN) - 10. it will be functioned for the 10 times to complete the whole perform. ---- this is number 2
Square root: O(sqrt(N)) - 32 times --- this is number 3
Quadratic: O(N*N) -   1000000 -- this is number 6
Linearithmic:  O(NlogN) --- 1000 * 10 = 10000 --- this is number 5

*/


// the best to worst
/* constant: O(1)
Logarithmic: O(logN)
Square root: O(sqrt(N))
Linear: O(N)
Linearithmic: O(NlogN)
Quadratic: O(N*N) / O(N*M) */

/* The complexity of sort function will be - O(NlogN) */
// if there are two types of complexity than we will take the worse one
