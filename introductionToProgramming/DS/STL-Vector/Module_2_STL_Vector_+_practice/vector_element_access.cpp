#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {10, 20, 30, 40};

    // its indexing works same as loop
    cout << v[3] << endl;

    // use of back and front function to get the last and first element of the vecctor
    // cout << v.back() << endl;
    // we can also access the last element in another way
    cout << v[v.size()- 1] << endl;

    // to print the first index
    cout << v.front() << endl;

    // anothe way
    cout << v[0];
    return 0;
}