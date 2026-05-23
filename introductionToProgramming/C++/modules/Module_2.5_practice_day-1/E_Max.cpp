#include<iostream>
#include<algorithm>

#include<bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin>>a[i];
    }

    // int c++ programmming
//    int mx = a[0];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = std:: max(mx, a[i]);
    } 

    // int c programing
   /*  int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
       
    here we are keeping the value of a if it is bigger than max or if max and that value is similar the we keep that value in max.
    mx = a[i];
    mx = mx
    if(a[i] > mx){
        mx = a[i];
       }
    } */

    std::cout << mx <<std::endl;
    return 0;
}