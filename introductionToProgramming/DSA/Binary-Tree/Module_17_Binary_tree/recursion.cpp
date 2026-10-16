#include<bits/stdc++.h>
using namespace std;

void print(int val){
    if(val == 0){
        return;
    }
    cout << val << endl;
    print(val-1);
};

int main()
{
    int x = 30;
    print(x);

    return 0;
}