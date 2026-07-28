#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>p(n);
        for (int  i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int answer = 0;
        // outer llop to choose the current element
        for (int i = 0; i < n; i++)
        {
            int leftSmaller = 0;
            int rightGreater = 0;

            // inner loop to check the left side 
            for (int j = 0; j < i; j++)
            {
                if(p[j] < p[i]){
                    leftSmaller ++;
                }
            }
            
            // inner loop check the right side
            for (int q = i+1; q < n; q++)
            {
                if(p[q] > p[i]){
                    rightGreater++;
                }
            }

            if(leftSmaller == rightGreater){
                answer++;
            }
            
            

        }
        
        cout << answer << endl;
    }
    return 0;
}