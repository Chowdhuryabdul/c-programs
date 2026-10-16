#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    int jersy;
    string country;

    Cricketer( string country, int jersy)
    {
        this->country = country;
        this->jersy = jersy;
    }
};

int main()
{
    // dynmaic object of these crickter class
    Cricketer* dhoni = new Cricketer ("india", 100);
    Cricketer* kohli = new Cricketer ("indial", 200);

    // copy to keep dhhoni in kholi. if we do copy in such way. we can not copy the object in such way
    // kohli = dhoni; - in this way we get error
    // cout << dhoni->jersy << " " << kohli->jersy << endl;
    
    // copy this way and it  will not impact after deleting the dhoni- this is the way to copy the dynamic object 
    // but in this way we will not get error
    kohli->country = dhoni->country;
    kohli->jersy = dhoni->jersy;
    // we can do this way, but it is not easy to do as if we have more element than we have to write many lines. so we can make it shorter-

    *kohli = *dhoni; /* copying is done in one line, we do not have any issue now that how many element are there to copy */

    // now delete dhoni
    delete dhoni;

    cout << kohli->country<< " " << kohli->jersy << endl;
    // cout << dhoni->country << endl;
    // cout << kohli->jersy << endl;
    return 0;
}



/* kohli = dhoni;
if we copy inn such way, then what happend in the memory?
when we declare a dynamic object which name as dhoni.it will take space for the country and jersy in the heap memory. this dynamic object will return pointer. so the address of that heap memory will be stored in the stack memory. for example the address of dhoni object is 20b which is stored in the stacke memory in dhoni pointer. 
and the next kohli object will be also stored int the heap memory. and its address is 20c, which will be store in the stack memory as kohli. 
when we copy dhhoni into kohli, than 20b will take the place of the 20c of kohli´s address. and there will be no connection with the adress of 20c in the heap memory. now dhonni and kohli will have the same address 20b. now if we delete dhoni(20b), than it will delete the things in the address of 20b in the heap memory. so after deleting when you try to print sth cout << kohli->country<< " " << kohli->jersy << endl; like this it will garbage value. as kohli has the address of dhoni, but now dhoni is deleted so the address stored in the kohli will not find anything in the heap memory.  */


  /* *kohli = *dhoni - what does it means

  what does it mean? whene we dereference the dhoni than we will get the whole object. 
  if we dereference a pointer we will get that value which will be pointed. 
  here this dhoni pointer indicates a object when we dereference it we will get the whole object. 
  now we dereference the khholi and copy all the value from the dhoni to kohli.  */


/*  how this object work in the heap and stack memory
  we know that new key word will access the heapy memory and will get a space with a adress. than there are two elements int he Cricketer class which are country and jersy and it will come to the object and will store to the heap memory.  than we call constructor and send the india and 100. and constructor set these valus in the country and jersy. 
  then we take a pointer to keep the object which name is dhoni. it will be stack memory and it will store the address of the messi object.  */