#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout << s;

    stringstream ss(s);
    string name;
    while (ss >> name){
        if (name == "Jessica"){
            cout << "YES" <<  endl;
            return 0;
        }
    }
     cout << "NO" <<  endl;
    
         

    return 0;
}