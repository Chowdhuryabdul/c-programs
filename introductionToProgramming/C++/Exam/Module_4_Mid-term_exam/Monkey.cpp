// #include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
   
    string s;
    
    while(getline(cin, s))
    {
        string s_space =""; /* to store new string */
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] != ' '){
                s_space +=s[i];  
            }
        }
        
        
        sort(s_space.begin(), s_space.end());
        cout << s_space <<   endl;
    }
    
    

    return 0;
}