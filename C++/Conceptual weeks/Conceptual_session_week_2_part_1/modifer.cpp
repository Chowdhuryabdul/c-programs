#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << endl << s2 << endl;

    // to concat

    // s1 = s1 + " " + s2;
    // we can do it with the append()
    s1.append(s2);
    
    
    // push and pop
    s1.push_back('E');
    s1.pop_back();
    cout << s1<< endl;

    cout << "------------"<< endl;

    s2 = s1;
    cout << s2 <<endl;

    return 0;
}