#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin >> s;

    // sring with the space
    // get line works as EOF, it will take string as long as it is finished
    getline(cin, s);


    // hwo to get the length of string
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        
        cout << s[i] << "" << endl;
    }

    
    // range based for loop
    for(auto c : s){ /* here there can be used char in place of auto */
        cout << c << " ";
    }
    

    return 0;
}

// lenght/range abse for--loop