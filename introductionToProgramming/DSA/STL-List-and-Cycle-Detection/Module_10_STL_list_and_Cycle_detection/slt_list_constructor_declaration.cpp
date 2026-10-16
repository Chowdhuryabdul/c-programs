#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l; /* here int is data type and l is the name of the list */
    // it menas i have taken a list which is empty now

    // we can check the size
    cout << l.size() << endl;
    
    // we can set the give the value to create a list- such as i will give here 10, it means the list will be 10 size. it will have 10 nodex
    list<int>l(10);
    cout << l.size() << endl;
    return 0;
}