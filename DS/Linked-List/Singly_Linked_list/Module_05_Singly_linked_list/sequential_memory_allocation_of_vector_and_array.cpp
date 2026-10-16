#include<bits/stdc++.h>
using namespace std;
int main()
{
    // decalre of array
    int a[5] = {10, 20, 30, 40, 50};
    // print the address - here it comes the memory address in hexa decimal-one this its common that the difference between them is 4
    cout << &a[2] << " " << &a[3] << endl; ;
    // print the same thing with decimal
    // cout <<(int)&a[2] << " " << (int)&a[3] ;

    // we can check the vector sequential memory allocation

    vector <int> v = {12, 13, 14, 15};
    cout << (int)&v[2] << " " << (int)&v[3];
    return 0;
}