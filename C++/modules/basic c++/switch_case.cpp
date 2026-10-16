#include<iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch(day)
    {
        case 1: /* if(day == 1)-- both are same */
            cout << "Saturday" << endl;
            break;

        case 2:  /* else if(day == 2) */
            cout << "sunday\n";
            break;

        case 3:
            cout << "Monday\n";
            break;

        case 4:
            cout << "Tuesday\n";
            break;

        case 5:
            cout << "Wednesday\n";
            break;

        case 6:
            cout << "Thursday\n";
            break;

        case 7:
            cout << "Friday\n";
            break;

            default:
            cout << "Wrong input";
    }

    return 0;
}




// switch is a kind of a cnodtional format. we can use the swithc where value of that condition is fixed. such as d == 10, f == 9; these sort of conditons

// the problem when the case is true then he prints all the case after that

// use case- if we need to print all the results after one getting true than we will use

// if we do not use break it will print all the results after getting true

// we will give default - when any case is not true than it will print default same as else