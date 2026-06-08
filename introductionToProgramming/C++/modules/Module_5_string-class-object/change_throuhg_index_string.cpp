#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";
    s[1] = 'u';
    cout << s << endl;
    return 0;
}

/* in this method i can not expand the string. for example here last char is o i can not add anything after o. but there is another way to expand it. so if i want to add after o then we need to expand the space in the memory.we can just change the char here.  all these expand memory and add new char for example- 
    s +=s2;
    s.append(s2); /
    s.push_back('A'); */