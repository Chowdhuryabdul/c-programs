#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;

    v.clear(); /* this clear function make the sixe 0, but these element still remain in the memory */
    cout << v.size() << endl; /* ow its size is 0 */

    // now we want to prove that these elements are not deleted
    cout << v[0] << endl; /* - now it provides me 10 */

//    if i push back now a value it will be push back in the o or first index in place of 10
v.push_back(100);
cout << v[0] << endl; /* - now it provides me 100 */


    return 0;
}