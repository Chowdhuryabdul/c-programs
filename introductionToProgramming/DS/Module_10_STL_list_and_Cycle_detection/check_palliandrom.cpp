#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        l.push_back(val);
    }
    bool flag = true;
   auto left = l.begin();
   auto right = prev(l.end());

   for (int i = 0; i < l.size() / 2; i++)
   {
    if(*left != *right){
        flag = false;
        break;
    }
    
   }
   
    if(flag == true){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}