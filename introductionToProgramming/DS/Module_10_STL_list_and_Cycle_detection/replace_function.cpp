#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 20, 30, 20, 50, 20, 70};

    // i have to say three thing in replace function-
    // 1. wheret to start 
    // 2. what will be the end 
    // 3. what will be replaced and after replacing what will be

    // for example i want to replace all the 20 with 100 --

    replace(l.begin(), l.end(), 20, 100);
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}