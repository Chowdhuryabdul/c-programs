#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    cout <<x<<endl;
    // to print the address
    cout<< &x <<endl;

    // change the value of address by dereferencing
    *(&x) = 200;

    // to declare pointer
    int *ptr; /* to dereferencing */

    ptr = &x; /* to access or assign the address of x variable */

  int *ptr = &x;  /*  we can declare and initialise */
    
    // Dereferencing to print the value by address
    cout << *(&x) <<endl;
    cout<< *ptr <<endl;
    return 0;
}