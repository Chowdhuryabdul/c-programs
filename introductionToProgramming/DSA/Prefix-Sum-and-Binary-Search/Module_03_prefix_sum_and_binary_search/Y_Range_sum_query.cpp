#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector <int> v(n +1 );
    for (int i = 1; i <= n; i++) /* time complexity of this code is - O(N) */
    {
        cin >> v[i];
    }
    while(q--){ /* time complexity of this code is - O(q). what it means, loop will run the amoun of times based on the the value of q. if the value of q is 3, than it will run 3 times. so its time complexity is order of q */
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; i++) /* here loop will start from l and finish to r. in this case we have to think about the worst case scenerio. what is the worst case scenerio? the loop will start from 1 and will run for n times. it means value of l will be 1 and value of n willl be number of index in array. why we need to think worst case? when we think to get the time complexity we alwyas have to think about the worse case. what is the worse case here? if the value of l is 1 and the value r is the value of n. it means the loop will run from 1 to N the whole loop. so the order of complexity will order of n - O(N)  */
        {
            sum +=v[i];
        }
        cout << sum << endl;
        
    }
    return 0;
}
/* 
The total calcualtion of order of compplexity of this code -
O(N) 
O(q) * O(N) -->>  O(QN)
in between this two i have to take the bigger one. O(QN) is the bigger.
now we not need to go the the question-
 - it says N and Q both will be 10^5
 - it means if N and Q are 10^5 = 10^5 * 10^5 = 10^10
 - but we know that compiler can do operation 10^7 in one second 
 - In question it says time limit is 1.5 second. so it can do operation 1.5 * 10^7 
 - but my code will run for 10^10 which will not run in this time.
 - it means i have to make code better */
