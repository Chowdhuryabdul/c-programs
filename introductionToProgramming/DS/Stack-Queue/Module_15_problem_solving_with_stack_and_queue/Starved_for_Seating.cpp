#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--){
        int team;
        cin >> team;
        int seat;
        cin >> seat;
        int a[team];
        for (int i = 0; i < team; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        
        // one team
        for (int i = 0; i < team; i++)
        {
            // another team
            for (int j = i+1; j < team; j++)
            {
            //    fan count
                int cur_fan = 0;
               for (int x = 0; x < team; x++){
                
                if(x == i || x == j){
                    cur_fan  = cur_fan + a[x];
                }
                else{
                    cur_fan += a[x] / 2;
                }
               }

               if(cur_fan > seat){
                   ans++;
            }
            
        }

       } 
        cout << ans<< endl;
    }
    return 0;
}