#include<iostream>

int* get_array(int n){
   
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
       a[i] = i + 1;
    }
    return a;
   
    
}

int main ()
{
    int n;
    std::cin>> n;
    int *result = get_array(n);

    for (int i = 0; i < n; i++)
    {
       std::cout<<result[i];
    }
    
    return 0;
 }