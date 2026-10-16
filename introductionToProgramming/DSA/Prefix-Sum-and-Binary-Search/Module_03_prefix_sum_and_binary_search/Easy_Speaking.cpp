#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        string s;
        cin >> s;
        bool flag = false;
        int cnt = 0;
        for (int i = 0; i < len; i++)
        {
            /* code */
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
                cnt = 0;
            }else{
                cnt ++;

            }
            if(cnt >= 4) flag = true;
        }
        if(flag == true) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    return 0;
}