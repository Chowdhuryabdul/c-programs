#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    string s2 = "hi";
    // s +=s2;
    s.append(s2); /* we can also do this with append function, here mention that one which will added */
    
    // to add charcter end of the existing one. you can not push multiple charcter or string.
    s.push_back('A');
    // s+='A';

    // to remove the last latter
    s.pop_back();
    cout << s << endl;

    return 0;
}

// in char array we used to use concat() to add two string
