#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {100, 200, 300};

//    to delete a single value
    // v.erase(v.begin() + 2);

    // to delete multiple value- last one point the last element it means it will delete the before element of the last element. here last element element is 6, but i want to delete untill 5. but we know that in such function we have to set the pointer in the after element of the one will be deleted.
    // v.erase(v.begin()+1, v.end()-1);
    v.erase(v.begin()+1, v.begin()+5);
    for (int x : v)
    {
        cout << x << endl;
    }
    return 0;
}