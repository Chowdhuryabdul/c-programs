#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; /* o(1) - what is the complexity on n - order of complexity is 1 because we need 1 operation to declare this. as it will be run 1 time as it is outside the loop */
    cin >> n; /* it is time complexity is also o(1) */
     
    for (int i = 1; i < n; i++) /* o(n) -  it is time complexity is o(n)- as it is rleative or depends on n */
    {
        cout << i << " ";
    }  
    return 0; /* -o(1) */
}

/* so what is the complexity here?
in such case we will take the most biggest or the worst case which is here o(n). so the final complexity is here o(n).
why we need to take the biggest one? as ther is not much change if you add the small one with the big one.
if we add the smaller thsoe than compleixity will be o(n+3), but we usally ignore the constant as if the value of n is 1 billion, the add 3 will not make any changes.

if we give here the value of n is n + 5, n*5, n-5, n / 2 than still we ignore the constant as if the value of n is 1 million than 3 or small number will not make any change

For (int i = 1; i < n; i+= 2)  here the compleixty will be the same as we know that we ignore the constant and whateverr it is as if the value is 2 billion, so small number will make any difference. so it is complexity is alos o(n).
    {
        cout << i << " ";
    }


if i have two loop in one code than what will be o(n) for the code--
the one will be run for the time that will be my complexity as it needs to run more time to do the job.
*/