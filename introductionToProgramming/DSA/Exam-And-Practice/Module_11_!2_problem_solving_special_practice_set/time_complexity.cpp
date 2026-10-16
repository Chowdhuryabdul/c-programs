#include<bits/stdc++.h>
using namespace std;
int main()
{
    // want to see here how many times operations needed to go to 0 fromm 10^9
    int v = 1e9; // 10^9
    int cnt = 0;
    while(v > 0){
        v /= 2;
        cout << v << endl;
        cnt ++;
    }
    cout << "Count:" << cnt << endl;
    return 0;
}


/* we will calculate the time complexity of the code-
This is the constraints in question-
10^9 is number of array element
100 will be N number 
test case will be 100

so we have calculated to see how many operationes needed to be a value be 0 from 10^9. it takes 30 times operations.
 so we have 100 number of elements in array which will be 100 * 30 = 3000
 - time complexity of sort function will be NlogN. so the value of N is 100 - it menas 100*log*100 - which will be around 600
 - and then 100 test case
 so total will be 3000*600*100 = 18.10^7 - this can easily be done by 1 second. */
