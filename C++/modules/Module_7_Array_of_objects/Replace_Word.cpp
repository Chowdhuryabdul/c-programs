#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--){

        string s;
        string x;
        cin >> s >> x;
    
        // for( char c : s){
        //     find(s.begin())
        // }
    
        // int size = s.size();
    
        // cout << size << endl;;
        size_t  found = s.find(x);
        // size_t found = 0;
       
        // if(found != string::npos){
        //     s.replace(found, x.length(), "#");
    
        // }
        while(found != string::npos ){
            s.replace(found, x.length(), "#");
            found = s.find(x, found+1);
        }
        cout << s <<endl;
    }
    


    return 0;
}