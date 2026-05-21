#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    /* if(a < b ){
        cout << a << endl;
    }else{
        cout << b << endl;
    } */

    // cout << min(a, b) << endl;
    // cout << min ({1,3,666, 78, 9}) << endl;
    // cout << max(a, b) << endl;

    // if i want to get the one among many than i have to use {} with the ().
    // cout << max({20000, 43, 65, 789}) << endl;


    // in case of swap in c programming

/*     int tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b << endl; */

    swap(a,b);
    cout << a << " " << b << endl;


    return 0;
}