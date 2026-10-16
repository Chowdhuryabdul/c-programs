#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int k;
       for(int i=0;i*i<n;i++)
    {
        sum += i;
    }


    for(int i=0;i<n;i++)
    {
        sum += i;
        i*=k;
    }

    return 0;
}

// O(NlogN)