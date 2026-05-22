#include<iostream>
#include <algorithm>

int main()
{
    int n;
    std:: cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i]; 
    }
    for (int i = 0; i < n/2; i++)
    {
        std::swap(a[i], a[n-1-i]);
     }   
        
       for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " "; 
    }

        
    return 0;
}