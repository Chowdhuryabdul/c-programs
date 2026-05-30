#include<bits/stdc++.h>
using namespace std;



// thi is for the static memory
// int * fun() /* as i will send an adress throguh pointer so i have to put star sign here */
// {
//     int x = 6;
//     int *ptr = &x;
//     // plan is to return pointer from this fun function
//     cout << "fun fucntion pointer:- " << *ptr << endl;
//     cout << "fun fucntion address:- " << ptr << endl;
    
//     // i want to send address - both are same
//     return ptr; 
//     // return &x;
// }


// this is for the dynamic memory

int *dynamic()
{



int *x = new int(20) ;
return x; /* it return the address of new int of heap memory */


}
int main()
{
    // int *result = fun();
    int *result = dynamic();
    cout << *result << endl;
    return 0;
}