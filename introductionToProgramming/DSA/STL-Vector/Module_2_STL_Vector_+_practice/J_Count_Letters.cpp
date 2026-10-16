#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin >> s;
    
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cin >> s[i];
    // }
    // int fre_arr[26] = {0};
    vector <int> fre_arr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int value = s[i] - 'a';
        fre_arr[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(fre_arr[i] > 0){
            char ch = i + 'a';

            cout << ch << " : "  << fre_arr[i] << endl;
        }
    }
    return 0;
}