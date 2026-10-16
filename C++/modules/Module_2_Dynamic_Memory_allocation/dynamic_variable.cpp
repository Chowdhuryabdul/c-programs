#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int x = 10; it is normal way to declare a variable

    // declaration of dynamic variable

    int *p = new int;

    // now we can keep value by dereferencing
    *p = 100;
    cout << *p << endl;

    // i can delete it 
    int *a = new int;
    delete a;
    return 0;
}






/*   int *p = new int-
when we decalre a dynamic variable it will take place in heap memory. and heap memory will return it as address not the direct varible same as normal variable. so in the first part we have take a variable p to store that address from the heap memory. we know that we need to pointer to store that address before variable.

first part will be stored in the stack memory and second part will be in the heap memory. first part will be deleted after returning to the main function, but the integer value will be store in the heap memory which will be accessinle from main function.
*/