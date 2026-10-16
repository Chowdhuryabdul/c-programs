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
    /* for (int i = 0; i < n/2; i++)
    {
        std::swap(a[i], a[n-1-i]);
     }  */  

    /*  for (int i = 0; i < n; i++)
     {
        for (int j = n-1; j >= 0; j--)
        {
           std:: swap(a[i], a[j]);
        }
        
        
     } */


     
     int i = 0;
     int j = n-1;
     while(i < j){
        // int tmp = a[i];
        // a[i] = a[j];
        // a[j] = tmp;
        std::swap(a[i], a[j]);
        i++;
        j--;
     }
     
        
       for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " "; 
    }

        
    return 0;
}