#include<bits/stdc++.h>
using namespace std;
int main()
{
//    how constructor works in different way
   
    /* string s = "hello";   string is a built in class in c++ */
    
    
   // we will declare a constructor for the string class. we know when we need to call the constructor. it is being called when object is declared
    // one way - we need to declare the object. here string is class name and s is the object. as we know that cosnstructor is called when object is declared, so we declare here. constructor workd based on the way of calling the constructor. here we can assign value in this constructe. we can assigne value like this so we do not need to take string varibale at beginning. this is one way. hello is the value which is assigned in the objecct
    // string s ();
    // string s ("Hello"); 
    
    // seccond method of constructor
    // mentioned earlier that it works based on the input - it is another way to work with the constructor
    // here 3 means it will resize the value hello- it will be hel now. it means it will keep this number of char and erase all
     string s ("Hello", 3); 

    // third method of constructor work
    // here it cut 4 char from the beginning and keep rest of the char

    string s1 = "Hello world";
    string t (s1, 4);

    // foruth way how constructor work
    // here it will declare string of size with A
    string s (5, 'A');
    cout << s;
    return 0;
}


// String is built class and it works as dynamic, not like dynmaic memoray allocation. actually it cna be worked based on the inpt


/* so there are is defference in case of roll or work of constructor between method second and third-
 if we assign any value by ourselves inside the constructor and int number. than it resize that string value by that number. it keep same number of char based on input and erase rest of them. for example in the second method the value is hello- so it will keep hel and number is 3 and delete later lo.
 On the other hand, if we can declare the string seperately and assign the string object in another string variable with the number. than it will cut the value from the beginning based on the input. for example in the third method, value is hello world and the number is 4 so it will cut hell and o world. */