#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
    int n;
    cin >> n;
    vector<long long int > height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    
   long long int first_largest_h = LLONG_MIN;
   long long int sec_largest_h = LLONG_MIN;

   int first_indx = -1, second_indx = -1;

   for (int i = 0; i < n; i++)
   {
    if(height[i] > first_largest_h)
    {
    sec_largest_h = first_largest_h;
    second_indx = first_indx;
    first_largest_h = height[i];
    first_indx = i;
    }
    else if(height[i] > sec_largest_h)
    {
        sec_largest_h = height[i];
        second_indx = i;
    }
   }
   
   if(first_indx < second_indx)
    cout << first_indx << " " << second_indx << endl;
   else
   cout << second_indx << " " << first_indx << endl;

}
    return 0;
}