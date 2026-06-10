#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    // it is manual way ot reverse a array by for and while loop
    int i, j;
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
      int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        
    }

       int i = 0, j = n-1;
    while(i < j){
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        i++;
        j--;
        
    }

    // in the c++ program
    // reverse(starting point, endingpoint)
    reverse(a, a+n);
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        
    }
    return 0;
}