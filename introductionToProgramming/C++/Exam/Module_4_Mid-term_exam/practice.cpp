#include <bits/stdc++.h>
using namespace std;


class Bike
{public:
    
    int age;
    string model;
    string name;


    Bike(int age, string model, string name){
        this->age = age;
        (*this).model = model;
        this->name = name;
    }
};



int main(){
    
    Bike japanese(10, "xyz", "maruit");
    // int age;
    // string model;
    // string name;

    // Bike japanese;
    // cin >> japanese.age >> japanese.model >> japanese.name;




    cout << japanese.age << " " << japanese.model << " " << japanese. name << endl;
    
    return 0;
}