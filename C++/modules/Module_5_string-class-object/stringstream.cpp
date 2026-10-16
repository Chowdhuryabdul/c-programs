#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    stringstream ss(s); /* stringstream is a class object */
    
    string word; /* this is just a string variable */
    /* ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl; */

    // we can also count the word
    int count = 0;
    // we can do this by loop
    while(ss >> word){ /* it is a conditionn, but different- it menas it will run unntil ss can bring the word. this condition means we are bringing a word from the ss and print it*/
        cout << word << endl; 
        count ++;
    }

    cout << count << endl;
    return 0;
}


// string stream will provide you the whole string word by word. first it divide the whole string word by word and store in itself. than if want i can take word from him and print. to bring the word from the stringstream i need to declare a string varinale. the name of class stringstream which is ss and use this sign >>. after giving me one word it will delete that word. 