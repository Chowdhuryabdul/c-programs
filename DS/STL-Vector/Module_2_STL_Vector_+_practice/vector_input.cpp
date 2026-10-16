#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // here we will declare vector of n sixe
    
    // int a[n];
    vector <int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // int the array it is mendatory to provide the size of arrya, but in vectro it is not mandatory. we can declare it with size.
    // in this case we can not take input like this ( cin >> v[i];) as there is nothing in the vector. it is empty. so we have to push back 

    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];

        // here we are taking one input from the user and push it back in the vector. by pushing back it will increase the size of vector by one.
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    
    return 0;
}


// taking input in vector is same as array
