#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss (s);
    string word; /* this varable to stroe the given word */
    
    // there is a issue to print space at the end of the word, which we do not need

    ss >> word;
    cout << word;

    
    
    while(ss >> word){

        reverse(word.begin(), word.end());
        cout << " " << word ;
    }
    return 0;
}