#include<iostream>
#include<algorithm>

int main()
{
    int a, b, c;
    std:: cin>>a >> b >> c;
    int mx = std:: max({a,b,c});
    int mn = std:: min({a,b,c});
    std::cout<<mn <<" "<< mx;

}