#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    /* for(int i = 0; i < s.size(); i++){
        cout << s[i] << endl;
    } */

   
   cout << *s.begin() << endl;
//    why we need to derefrece this begin function. this is because it is a poinnter

   cout << *s.end() << endl; /* this end point the after the last index of the string. it prints null as we know that after last index there will be nul char */

   cout << *(s.end() - 1) << endl; /* it will print the exactly last index */


    /* what is roll of iterator?
    we can traverse the whole string same as loop */
    /* here first i need to say what types of iterator- here it is string iterator, double colon. as the string works here as namespace. than we have write iterator keyword. than have to give the name of iterator. iterator will start begin() and will finish end() and same ++. as iterator is poiinter than we have to dereference it 
    we can use auto in place of the string::iterator. if i write auto it can easily detect is it string or int
    */
    for(/* string:: iterator */ auto it  = s.begin() ; it < s.end(); it++){
        cout << *it << endl;
    }


    return 0;
}

/* Iterator works same as loop. but it is used in advance data structure where index is not existed. for example, we can find the index in the integer and char array. but there will some data without index. we can use iterator there. */

/* if i want to print the exactly last index by thhe end function- how to do it? as we know that pointer can go forward or back by plus and minus. */
