#include<bits/stdc++.h>
using namespace std;

void fun (int* &p)
{
    
    // print value of p by dereferencing
    // cout << "in fun function " << *p << endl;

    // if i do not print it rather i change the value from 10 to 100
    // *p = 100;

    // now we well chagne the whole pointer, it will point a new variable. now it points to y, not x
    // int y = 200;
    // p = &y;

    // if we null the pointer, we will get the same in the main
    p = NULL;

    // print the address of p
    cout << "in fun function " << &p << endl;
}
int main()
{
    int x = 10;
    // this is a pointer
    int* p = &x;
    
    // pass this pointer to a fun function
    fun(p);

    // we can also print here
    // print value of p by dereferencing
    // cout << "in main function " << *p << endl;

    // now we will print the value of x and will give me the chage value 100. so it means in function if change the value with dereferencing it works. but we do not return it from func function.
    // cout << x << endl;

    // now i print p and check that does it get the chage value of p in the function 200. it gets 10. it means if i change the pointer in function, the change does not get the main function.
    // cout << *p << endl;

    // why the change does not come to mmain function. this is because the p in the main and p in the fun function is not the same. which we can prove by printing the address. they will show the different address

    // cout << "in main function " << &p << endl;
    cout << "in main function " << p << endl;
    return 0;
}