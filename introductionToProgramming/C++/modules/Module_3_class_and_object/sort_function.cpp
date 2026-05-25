#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

//    this is from small to big - ascending order

    // sort(a, a+n); /* sort the whole array */
    // sort(a, a+4);
    // sort(a, a+3);
    // sort(a+2, a+4);
  /*   in this function i need to give the starting point and the ending point. ending pint will be that one, we will finish just previous index. we have an array 1, 2, 3, 4, 5. i want to end in 4 then i have to run til 5. if i want to finish than i have to give it  after 5 */

  /* here we can give starting point as a. as we know that a store indext of 0 element. if my arra is 10 50 30 20 40. here a is 10 and a+1 is 50 and a+2 is 30 and a+3 is 20 and a+4 is 40. but i have to after the ending point which is a+5 */

 /*  if i want to sort the whole array than i can put the array size instaed of number. example i have 5 size of array. if i want to sort the whole array. so it will start from name of array which a, a+1, a+2, a+3, a+4 ,a+5. so here a+5 points to the last after the last index of array so 5 here is the size of array. so i can easily give the array sixe whhich is n. if i want to sort whole array */

//   if i sort(a, a+4) do this , than last value will be there and it will be also printed

// for the big to small - descending order. here i have to write greater and < data type of array and than i have to call the compare function
sort(a, a+n, greater<int>());
    for ( int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}