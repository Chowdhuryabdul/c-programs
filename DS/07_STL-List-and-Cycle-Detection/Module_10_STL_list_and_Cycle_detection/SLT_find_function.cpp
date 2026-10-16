#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {10, 20, 30, 50, 60};
    // since find function will return an iterator so i have sth to rcv it- so we can take an iterator by auto keyword

    auto it = find(l.begin(), l.end(), 200);
    if(it == l.end()){
        cout <<"Not Found" << endl;
    }else{
        cout <<"Found" << endl;
    }
    return 0;
}