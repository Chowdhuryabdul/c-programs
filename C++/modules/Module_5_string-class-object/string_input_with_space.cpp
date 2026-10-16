#include<bits/stdc++.h>
using namespace std;
int main()
{
    
     // there is a issue with the get line - here it print the int 10 but does nor print the hello world. if i take the input with the cin it prints the both. 
    int x;
    cin >> x;

    string s;
    // cin.getline(s, 100) this is in c programming. it does not work in case string array, as built in string is dynamic array and dynamic array does not have any particular size. it works if we take input like this - char s[100]

    cin.ignore(); /*  - i need to give this to skip the enter click */
    getline(cin, s);
    
    
   
    
    cout << x << endl;
    cout << s << endl;
    return 0;
}


/* if we use char array like this - char s[100]- then we have to use this- cin.getline(s, 100)
but in case of built in string then we have to use -    getline(cin, s) */