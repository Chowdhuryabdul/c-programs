#include<bits/stdc++.h>
using namespace std;
void recur( int n, int i){
    if(i > n){
        return;
    }
    recur(n, i+1);
    cout << i << endl;

};
int main()
{
    int n = 10;
    recur(n, 1);
    return 0;
}