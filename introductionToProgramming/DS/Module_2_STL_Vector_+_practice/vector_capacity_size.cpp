#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // vector always double its capacity 
    cout << v.capacity() << endl; /* here capacity - 0 */
    v.push_back(10);
    cout << v.capacity() << endl; /* here capacity - 1 */
    v.push_back(10);
    cout << v.capacity() << endl; /* here capacity - 2 */
    v.push_back(10);
    cout << v.capacity() << endl; /* here capacity - 4 */
    v.push_back(10);
    cout << v.capacity() << endl; /* here still capacity - 4 */
    v.push_back(10);
    cout << v.capacity() << endl; /* here still capacity - 8 */

    return 0;
}