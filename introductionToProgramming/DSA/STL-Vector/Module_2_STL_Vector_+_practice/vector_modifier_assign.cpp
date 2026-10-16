#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1, 2, 3, 4, 5};
    vector <int> v2;
    // we assgine v vector in v2
    v2 = v;

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     /* code */
    //     cout<< v2[i] << endl;

    // }

    for(int x : v2){
        cout << x << " ";
    }
    
    return 0;
}