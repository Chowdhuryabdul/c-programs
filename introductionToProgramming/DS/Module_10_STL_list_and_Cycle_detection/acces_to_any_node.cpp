#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {100, 200, 300};
    // we w@have to use here next function to access any nodes. first we have to provide the begin iterator and than we have to which number of element i want to go than i have to put that imagineray index of element- it will give me 200. since it is iterator, so i have to dereference it before printing.
    cout << *next(l.begin(), 1);
    return 0;
}