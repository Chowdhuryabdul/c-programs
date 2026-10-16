#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        int a[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    
       int smallest = a[0];
       for (int i = 0; i < n; i++)
       {
        if(a[i] < smallest){
            smallest = a[i];
        }
       }
    
       int cnt = 0;
       for (int i = 0; i < n; i++)
       {
        if(a[i] == smallest){
           cnt++;
        }
       }
    
       if(cnt >= 2){
        cout << "YES" << endl;
       }else{
        cout << "NO" << endl;
       }
    }
    return 0;
}