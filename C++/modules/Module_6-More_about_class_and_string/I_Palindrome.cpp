#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string l_case = s;
    for (int i = 0; i < l_case.size(); i++)
    {
        l_case[i] = tolower(l_case[i]);
    }

    string rev = l_case;
    reverse(rev.begin(), rev.end());
    if(l_case == rev){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
  
    // reverse(l_case.begin(), l_case.end());


    return 0;
}