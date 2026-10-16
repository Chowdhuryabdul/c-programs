#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }


    int new_ar[n];
    int pos = 0;
    int neg = 1;

    for (int i = 0; i < n; i++)
    {
        if(a[i] >= 0){
            new_ar[pos] = a[i];
            pos += 2;
        }else{
            new_ar[neg] = a[i];
            neg += 2;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << new_ar[i] << " ";
    }
    
    
    return 0;
}