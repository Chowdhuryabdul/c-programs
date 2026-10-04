#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int new_arr[n];
    int even = 0; int odd = 1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0){
            new_arr[even] = a[i];
            even += 2;
        }else{
            new_arr[odd] = a[i];
            odd += 2;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << new_arr[i] << " ";
    }
    
    return 0;
}