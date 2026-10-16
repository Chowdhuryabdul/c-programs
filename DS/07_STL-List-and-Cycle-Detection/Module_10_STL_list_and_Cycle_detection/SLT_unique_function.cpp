#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 20, 30, 10, 40, 40, 30, 30 , 60};
    // l.sort();
    // l.sort(greater<int>());

    l.unique();
    // here it is not sorted but it remvoe those who are side by side
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}