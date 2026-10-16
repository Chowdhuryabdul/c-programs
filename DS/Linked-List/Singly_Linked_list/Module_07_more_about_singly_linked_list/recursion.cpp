#include<bits/stdc++.h>
using namespace std;
void hello(int val){
    if(val == 10){ /* this is the condition to stop th erecursion same as stopping loop */
        return;
    }

    hello(val+1); /* incremen and decrement */
    cout << val << endl;
}

int main()
{
    // Both are correct
    
    hello(1); /* - it is initialization same as array */
    return 0;
}