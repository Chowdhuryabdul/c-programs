#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n, x;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
       if (a[i] % x == 0){
        if(a[i] > max){
            max = a[i];
        }
       }
    }

    cout << max;

     return 0;
    }
    
    

     

     
     
     

