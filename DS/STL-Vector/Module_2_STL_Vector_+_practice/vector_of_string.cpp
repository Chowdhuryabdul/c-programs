#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector <string> v(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        // without space
        // cin >> v[i];


        // with space
        getline(cin, v[i]);
    }

    // one way to take input

    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << v[i] << endl;
    // }


    // another way to take input
    for (string x : v)
    {
        /* code */
        cout << x << endl;
    }
    
    
    return 0;
}

// vector and string - both by nature a array. as we know vector works behind the scene as dynamic array and string itslef a char array. so it actually works as 2dr array