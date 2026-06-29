#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        int min_length = min(n, m);
        for (int i = 0; i < min_length; i++)
        {
            /* code */
            if(s[i] == t[i]){
                // if mathced
                cout << s[i];
            }else{
                // if unmatched
                /* if i do not break here, than after matching it will run agian and will print the next matching after pause. for example - here is two string abcd, axcd. first it will get the matching and next not matching, and then again matching whicn will be printed but we do not need that. that is why we need break  */
                break;
            }
        }
        cout << endl;
    }
    return 0;
}