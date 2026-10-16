#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c = 'd';
    // letter to index
    int index = c - 'a';
    cout << "Letter:" << c << endl;
    cout << "index:" << index << endl;

    // index to letter
    char ch = 'a'+ index;

    cout << "letter from index:" << ch << endl;


    return 0;
}