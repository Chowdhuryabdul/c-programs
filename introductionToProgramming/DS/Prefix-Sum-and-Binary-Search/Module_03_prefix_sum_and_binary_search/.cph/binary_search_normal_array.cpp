#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    int val;
    cin >> val;
    /* for (int i = 0; i < n; i++)
    {
        if(a[i] == x){
            flag = 1;
        }

    } */

    // here instead of array we will use the binary search

    // declaration of two pointers
    // starting pointer
    int l = 0;

    // end pointer - n-1 means to place it last index
    int r = n-1;

    // now we will run loop - we have take a while loop as we will run only condition
    while(l <= r){ /* it means condition will run untill left is smaller than right and equal. if right becomes bigger than left, so it will be stopped */
        // to calculate mid
        int mid = (l + r) / 2;

        // run condition to check the mid number is that number which i am looking for
        if(a[mid] == val){
            flag = 1;
            break; /* why we need break? this is because we do not change anything after getting mid. so if we do not break it it will run for the indefinite time */
        }else if (a[mid] > val){ /* if value is not equal than either it will be bigger or smaller. which we are chcking here  */
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    if(flag == 1){
        cout << "Found";
    }else {
        cout << "Not Found";
    }
    return 0;
}

// how to bring the r in the previous box of mid = mid - 1