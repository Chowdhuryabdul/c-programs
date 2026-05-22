// Our case is to prove to show that all the things are deleted automatcally from the fun function whenever we have returned to the main function



#include<bits/stdc++.h>
using namespace std;

// this is the pointer variable to store the address of that x varible 

int *p;
void fun()
{
    int x = 10;
    p = &x; /* here in pointer variable p we store the address of x variable in p  */

    // now are printing the pointer p

    cout << "Fun ->>" << *p << endl;
    return;

}

int main()
{
    fun();
    cout << "main Fun ->>" << *p << endl;
    return 0;
}


/* we have received this result -
Fun ->>10
main Fun ->>1 */