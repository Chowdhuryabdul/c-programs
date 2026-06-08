#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    // to print the single index value
    cout << s[4] << endl;

    // we can also print by the at function
    cout << s.at(0) << endl;

    // prinnt last index
    cout <<s.back() << endl;

    // print first index
    cout <<s.front() << endl;

    // last index of string-this is alternative to back function
    cout << s[s.size()-1] << endl;
    return 0;
}

// how to print the last char of index without back() function
// if we need last index we can alos write - s[s.size()-1]