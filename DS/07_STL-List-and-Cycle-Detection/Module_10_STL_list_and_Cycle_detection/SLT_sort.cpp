#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 30, 2222, 40, 420};

    // this is asending sort
    l.sort();

    // descending sort
   /*  i need say three things -
    1. greater - greater
    2. data type <int>
    3. call the function - () */

    l.sort(greater<int>());
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}