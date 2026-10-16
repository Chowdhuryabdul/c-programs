#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    // cout << q;
    int a[n];
    for (int i = 0; i < n; i++) /* O(N) */
    {
        cin >> a[i];
    }

    sort(a, a+n); /* O(NlogN) */
    while(q--){ /* O(Q) */
        int x;
        cin >> x;
        int flag = 0;
        int l = 0;
        int r = n - 1;
        // for (int i = 0; i < n; i++)
        // {
        //     // cout << x;
        //     if(a[i] == x)
        //     {
        //         flag = 1;
               
        //     }
        // }

       while(l <= r){ /* O(logN) */
         int mid = (l + r) / 2 ;
        if(a[mid] == x){
            flag = 1;
            break;
        }else if(a[mid] > x){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
       }
        
       if(flag == 1){
           cout << "found\n";
       }else{
           cout << "not found\n";
       }
    }
    
    return 0;
}


/* Total order complexity of the code is -
 = O(N) + O(NlogN) + O(Q) * O(logN)
 = O(N) + O(NlogN) + O(QlogN)
 = as all are in the pluss or additon condition. in case of this we will take the biggest one
 = here O(N) is the lowest which we can discard
 = Btween O(NlogN)and O(QlogN), in the question the value of N and Q is 10^5. it means both are same. since both are same we can take one of them.
 = we can take O(NlogN) as order of complexity of the whole code.
 = now we need to understand that can it pass within the given time limit 1 second
 = accroding to question value of N will be 10^5 and log will be (10^5) and we have calculated this in the log calculator. it is value is 17
 = so 10^5 * 17 = it will be close to 10^6 which is lower than the 10^7. 
 */


/*  

What needs to do if array is not sorted in case of binary search?

If we get the array unsorted as we know that in case of binary search array will be sorted. but if we get unsorted than there will be two options-
 1. We can do lienar search - which compleixty will be o(n);
 2. First sort than binary search.
 among these two methods which complexity is good?
 in such case we have to do the time complexity analysis- i
 1. Linear search = O(n);
 2. sort - O(NlogN) --> binary search - O(LogN). sort and binary search needs to do one time. and it will be seprated, not nested. as these are not nested, we will take the bigger one or worse one among these two sort and binary complexity. the bigger one is here O(NlogN).

 So among these two methods here which one is better. here linear search is better. so we need to see the question and understand the situation and take the discion.  */
