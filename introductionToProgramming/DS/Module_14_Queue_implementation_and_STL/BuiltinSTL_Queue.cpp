#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    
    // we need to keep in minde tow things while pop and front. is queue is empty or not? if it is empty but we try to delete in empty queue than we will get runtime or segmentation error. but when we do it by loop that we do not need it seperately as we have already given that condition. it is only when you want to print or pop seperately. 

    // q.push(10);

    // if(!q.empty())
    // q.pop();
    // if(!q.empty())
    // q.front();


    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

   cout << q.front() << " " << q.back() << " " << " "<< q.size() << endl;
   while(q.empty() != true){
    cout << q.front() << endl;
    q.pop();
   }
    return 0;
}