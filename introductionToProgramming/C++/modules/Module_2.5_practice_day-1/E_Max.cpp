#include<iostream>
#include<algorithm>

int main()
{
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin>>a[i];
    }

   int mx = a[0];
    for (int i = 0; i < n; i++)
    {
        mx = std:: max(mx, a[i]);
    } 

    std::cout << mx <<std::endl;
    return 0;
}