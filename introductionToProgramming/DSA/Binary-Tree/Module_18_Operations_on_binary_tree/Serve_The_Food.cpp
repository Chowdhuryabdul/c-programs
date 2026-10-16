#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    queue<int> food_order;

    while(Q--){
        int type_operation;
        cin >> type_operation;

        if(type_operation == 1){
            int x;
            cin >> x;
            food_order.push(x);
        }else if(type_operation == 2){
            if(food_order.empty()){
                cout << -1 << endl;
            }else{
                cout << food_order.front() << endl;
                food_order.pop();
            }
        }
    }
    return 0;
}