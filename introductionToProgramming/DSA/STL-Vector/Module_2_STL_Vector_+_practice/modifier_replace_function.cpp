#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = { 1, 2, 3, 2, 5, 2};
    // vector <int> v2 = {100, 200, 300};

    // plan is to convert or replace all the 2 into 100
    // replace is not function under vector that is why we do not need to write v.relace. here we need to give two pointer begin and end, which one one to replace (2) and which element will be insert by replaceing which is 100
    // replace(v.begin(), v.end(), 2, 100);
    replace(v.begin(), v.end()- 1, 2, 100);
    for(int x : v){
        cout << x << endl;
    }
    return 0;
}