#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int recur(int val){
    if(val > 5)
        return 0;

  int sum =  recur(val + 1);
    
    return sum + val;
}
int main()
{
   int r = recur(1);
   cout << r << endl;
    return 0;
}