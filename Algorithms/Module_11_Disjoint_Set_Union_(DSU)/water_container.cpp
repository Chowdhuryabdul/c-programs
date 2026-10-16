#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
       int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   
    int first_index = 0;
    int second_index = -1;
    // long long int first_height = LLONG_MIN;
    // long long int second_height = LLONG_MIN;
    
    for (int i = 0; i < n; i++)
    {
       if(a[i] > a[first_index]){
        first_index = i;
       }
        
    }
    for (int i = 0; i < n; i++)
    {
       if(i == first_index){
        continue;
       }
        if(second_index == -1 || a[i] > a[second_index]){
        second_index = i;
       }
        
    }

    
    if(first_index < second_index){
        cout << first_index << " " << second_index << endl;
        
    }else{
        cout << second_index << " " << first_index << endl;

    }
    }
    
    

    
    
    return 0;
}