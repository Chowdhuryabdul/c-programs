#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
   /*  for(int i = 0; i < s.size(); i++){
        cout << s[i] << endl;
    } */

    // Alternative or shoerter versjon of this one to print the string char by char
    // we need to give the data type, here data type is char because it is a char array, so we will write char. then will give the name and end sting variable name

    // we can use it in case where we do not need to work with the index as it is just work with the index.

    for(char c : s){
         cout << c << endl;
    }
    return 0;
}