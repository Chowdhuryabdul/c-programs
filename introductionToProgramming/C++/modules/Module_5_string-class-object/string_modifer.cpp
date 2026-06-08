#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";
    string s2 = "Hi";
    // s +=s2;
    s.append(s2); /* we can also do this with append function, here mention that one which will added */
    
    // to add charcter end of the existing one. you can not push multiple charcter or string.
    s.push_back('A');
    // s+='A';

    // to remove the last latter
    s.pop_back();

    // to asing a new value
    // s = "Gello";
    s = s2;

    // we can do it with the assign function
    // s.assign(s2);
    // s.assign("gello");

    // to erase part of string - delete we can delete the whole but by erase we can delete part of it. we need to give that index, from where we want to start. if i want to delete a prticular part than i have to say from which index it will be started and how many it will be deleted. if you give one value than it will start from that value and will finish at the end.

    s.erase(3, 2);

    // to replace the part of string- here first one means where to start and 5 means how many will be deltted and than replace the world by Bangladesh
    s.replace(6, 5, "Bangladesh");


    cout << s << endl;

    return 0;
}

// in char array we used to use concat() to add two string
