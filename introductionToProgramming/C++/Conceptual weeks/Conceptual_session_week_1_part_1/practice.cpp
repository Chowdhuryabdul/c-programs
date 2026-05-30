#include<bits/stdc++.h>
using namespace std;

int* abc(int n)
{
    int* arr = new int [n];
    
    for (int i = 0; i <= n; i++)
    {
       cin>>arr[i];
    }
    return arr;
}


int main()
{
    int n;
    cin>>n;
    int * result  = abc(n);
    for (int i = 0; i < n; i++)
    {
        cout<<result[i]<< " ";
    }
    
    return 0;
}