#include<bits/stdc++.h>
using namespace std;
int main()
{
    // char c ='c';
    string s = "abacaba";
    
    int fre[26] = {0};
    // fre[c - 'a'];
    for(char c : s){
        
        fre[c - 'a']++;
    }

    cout << fre['a' - 'a'] << endl;
    cout << fre['b' - 'a'] << endl;
    cout << fre['c' - 'a'] << endl;

   


    return 0;
}