#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.top();
    pq.push(100);
    // when we pop the biggest one will be pop
    pq.pop(); // 100
    pq.pop(); // 30
    cout << pq.top() << endl;
    return 0;
}


// int the priority_queue there is not back, as it works with the front, and it does not have front and back samme as normal queue