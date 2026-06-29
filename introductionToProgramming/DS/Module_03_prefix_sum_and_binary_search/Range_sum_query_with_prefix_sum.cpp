#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    // input vector
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // first i will do the frefix sum - why am i doing it outside the loop? this is because i need it just for the once-

    // prefix vector 
    vector<long long int> pre(n + 1);

    // first index of input array will set directely in the first index of prefix array
    pre[1] = v[1];

    // we will start a loop which will start from the second index and first index will be set directly. this will be clculated the prefix sum.

    // it is prefix aray
    for (int i = 2; i <= n; i++)
    {
        /* code */
        pre[i] = pre[i - 1] + v[i];
    }

    // print prefix sum
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << pre[i]<< " ";
    // }

    while (q--)
    {
        /* code */

        int l, r;
        cin >> l >> r;

        // here we can not solve with the loop for the time complexity
        // for (int i = l; i <= r; i++)
        // {
        //     /* code */
        //     sum +=v[i];

        // }

        // to sum with the prefix sum formula
       long long int sum;
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}


// here i have started all the index from 1, this is because questions wants it from 1. otherwise it will be 0. If it is 0, codition will be l == 0


/* How does it work?
vector <long long int> pre(n + 1);
    pre[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        
        pre[i] = pre[i - 1] + v[i];
    }
first of all,  value of input vector is - 5 5 2 3
Now the first value (5) of input vector will set to the pre - vector directly.
Then loop will run from the index 2. 
so the value of 2nd index is 5 and condition is true. 
then next line -  pre[i] - value is 2 = pre[i - 1] + v[i] - its value 5;
so pre[i] = pre[2-1] it means value of first index which is 5 + 5 = 10.

than loop will run in second round where pre[i] is 3
pre[i] = pre[i-1] + v[i] --> pre[3-1] + 2 --> pre[2] its value is 10 + 2 = 12

than loop will run in third round where pre[i] is 4
pre[i] = pre[i-1] + v[i] --> pre[4-1] + 3 --> pre[3] its value is 12 + 3 = 15 */

/* how does it work? 
int l, r;
        cin >> l >> r;

       long long int sum;
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];

here l is 1 abd r is 3

so in condition, i have written if l is equal to 1 than sum will be pre[r] - what is the pre[r]? - it is 12 which we have got in the prefix array. See the previous comment, how i to get 12

than if condition is not equal to array - l is 3 and r is 6

than sum = pre[r] - pre[l - 1];
so sum =  3 - (6 - 1)
sum = 12 - 5 = 7 */