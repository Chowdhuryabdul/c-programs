#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    // char array declaratio and value assign in c and c++
    
    // c program
    // to decalre a cahrecter array in the c
    char s[10] = "Hello";

    // if i want change the value of this from hello to gelo- as we know that we can intilialize the value of array only one time when it is first declared. here we can do by strcpy () function.

    strcpy(s, "Gello");

    // Now we will do the same with the c++ built in finction- we can declare like integer - for example we used to declare int x; for the integer. now we can do so for the string. which actually work as charcter array behind the scene.

    // this is string data type
    string str = "hello";

    // the direct change of the value without strcpy() function
    str = "gello";

    cout << str << endl;


    
    // compare to array in c and c++
    
    // how to compare two charecter array in c program
    char s_array[10] = "hello";
    char s1_array[10] = "hello";

    // if i want to compare this two char array and will check that does it return 0

    if(strcmp(s_array, s1_array) == 0){
        cout << "they are same" << endl;
    }

    // how to compare these two char array in c++

    // we do not need char arrar and we do not need to strcmp function to compare

    string s_array2 = "Hello";
    string s_array3 = "Hello";
    if(s_array2 == s_array3){
        cout << "SAME" << endl;
    }else{
        cout << "NOT SAME" << endl;
    }




    // we can assigne more value in the string declaretion in c++ than in c
    // for exaemple if we declare char s (10) - than if we assing new value later it has to be 10, but by string we can make the way we want


    string s_1 = "Hello"; /* here sixe 5 */
    s_1 = "I live in Norway";  /* then i have assigned long string */
    cout << s_1 << endl;
    return 0;
}

