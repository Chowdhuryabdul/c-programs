#include<bits/stdc++.h>
using namespace std;
int main()
{
    
   int t; cin >> t;
   while (t--)
   {
     string s1;
    string s2;
    cin >> s1 >> s2;
    
    if(sizeof(s1) != sizeof(s2)){
        cout << "NO\n";
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2)
    cout << "YES\n";
    else
    cout << "NO\n";
   }
   
    return 0;
}