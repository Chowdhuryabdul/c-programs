#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) /* now the complexity is order of n, but when it will be order n suare if the same loop comes as nested formation */
    {
        for (int j = 0; j < n; j++) /* now the complexity of thid code is order of n sqaure */
        {
            /* code */
            cout << "hello" << endl;
        }
        
    }
    
    return 0;
}

/* here the order of the complexity of the first loop is o(n), means linear n. and the the order of complexity is also o(n). so if loop comes as nested loop than it will be multiplied and it is order of square (n) - o(n*n)

here if the value of n is 3 that means as it is nested than it will multiplied by. so 3 * 3 = 9. so it means it run the operation for the 9 times. so it will print the hello 9 times


*/