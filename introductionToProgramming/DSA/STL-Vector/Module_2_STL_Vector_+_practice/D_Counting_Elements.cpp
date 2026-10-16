#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }

    int cnt = 0;
    /* for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            if (a[j] == a[i] + 1){
                cnt++;
                break ;
            }
        }
        
    } */

    for (int i = 0; i < n; i++)
    {
        if(count(a.begin(), a.end(), a[i] + 1)){
            cnt++;
        }
    }
    
    cout << cnt << " ";
    
    return 0;
}