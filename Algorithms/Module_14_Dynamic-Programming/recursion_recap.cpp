#include<bits/stdc++.h>
using namespace std;

void recursion(int val){
    if(val > 5)
    return;

    recursion(val + 1);
    cout << val ;
};
int main()
{
    int m = 1;
    recursion(m);

    return 0;
}