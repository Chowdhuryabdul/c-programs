#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {100, 200, 300, 400, 500};

    // print tail
    cout << l.back() << endl;

    // print head
    cout << l.front() << endl;

    // print any thing in between
    cout << *next(l.begin(), 1) << endl;

    // we can also print the head with the iterator which will return a pointer that needs to do direfference

    cout <<* l.begin() << endl;


   
    return 0;
}