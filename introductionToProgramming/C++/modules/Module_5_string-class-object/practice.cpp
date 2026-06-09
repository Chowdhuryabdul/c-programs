#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // stringstream ss (s);
    stringstream ss; ss << s;
    string word;
    ss >> word;
    cout << word;

    return 0;
}