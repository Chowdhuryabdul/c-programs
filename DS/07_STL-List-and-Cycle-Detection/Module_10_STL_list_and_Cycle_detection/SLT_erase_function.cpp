#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {100, 200, 300, 4000, 5000, 500000};
    
    // erase a single value

    // erase function - i need to give go to that node which i want delete. if i want to delete 300, i have to give it a pointer of that position and i need to provide that pointer with the next function.  so i need to use the next function to access that particular node - here i want to delete the 2nd index 300
    l.erase(next(l.begin(), 2));

    // erase a multiple values -

    /* In case of multpile deletion, i need to take two pointer where to start and where to end. for exampl if i want to delete from 200 to 4000. than i have to take a poinnter which will start from 200 and another pointer which will indicate to the next value of the one will be deleted. */

    l.erase(next(l.begin(), 1), next(l.begin(), 4));
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}