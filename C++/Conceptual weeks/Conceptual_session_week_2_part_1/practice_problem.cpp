#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    cout << s<< endl;
    int index = s.find("X");

    cout<<s.replace(index,1," ") <<endl;
    return 0;
}