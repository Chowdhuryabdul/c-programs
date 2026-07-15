#include<bits/stdc++.h>
using namespace std;

void print_array(int a[], int n, int i){
    if(i == n){
        return;
    }
    cout << a[i] << " ";
    print_array(a, n, i+1);
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
            cin >> a[i];
    };

    print_array(a, n, 0);
    
    return 0;
}