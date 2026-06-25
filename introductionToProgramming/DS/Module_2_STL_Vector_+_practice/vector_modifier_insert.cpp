#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1, 2,  4 ,5};
    vector <int> v2 = {100, 200};
    // need to say two things - position and value
    // v.insert(pos, val);
    v.insert(v.begin()+2, 100); /* it will insert 100 in between 1,2 and 4, 5- here insert the single value */

    // to insert multiple value 
    v.insert(v.begin()+2, v2.begin(), v2.end());

    for (int x : v)
    {
        /* code */
        cout << x << endl;
    }
    
    return 0;
}