#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin >> s ;

    // erase()take single and multiple parameter- if you give on e parameter than it will erase all the parameter after given index. if 2 than it will start from the the given index accordinng to the input and second parameter indicates how many will be deleted.
    // cout << s.erase(1, 3) << endl;


    // insert function

    // cout << s.insert(1, "ogr") << endl;



    string s1;
    cin >> s1;

    // insert a space after helllo
    s1.insert(5, " ");
    
    // replace function
    s1.replace(6, 5, "Earth");
    cout <<s1 << endl;



    // find function
    // to find the part or substring of the string
    // when it find that we are lookinng for, than it will written a number. it means this will return that number of index where this found part of strinsg is in index

   cout<< s1.find("Ear") << endl;

   int idx = s1.find("Earr");

   if(idx != -1){
    cout << " Found" << endl;
   }else{
    cout << " Found" << endl;
   }
    
    return 0;
}