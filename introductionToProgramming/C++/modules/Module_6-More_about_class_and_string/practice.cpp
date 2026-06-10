#include<bits/stdc++.h>
using namespace std;

class Crieckter
{
    public:
    int jersy;
    string country;


    Crieckter(int jersy, string country){
        this->jersy = jersy;
        this->country = country;
    }
};


int main()
{
    Crieckter *dhoni = new Crieckter(400, "India");
    Crieckter *kohli = new Crieckter(200, "India");

    // kohli = dhoni;

    // kohli->jersy = dhoni->jersy;
    // kohli->country = dhoni->country;

    *kohli = *dhoni;

    cout << kohli->jersy << " " << kohli->country << endl;

    delete dhoni;

    return 0;
}