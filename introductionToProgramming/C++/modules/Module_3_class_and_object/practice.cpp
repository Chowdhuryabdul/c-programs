#include<bits/stdc++.h>
using namespace std;

class Bike
{
    public:
    char color[100];
    int speed;
    double length;
};

int main()
{
    Bike suzuki;
    char temp[100] = "blue";
    strcpy(suzuki.color, temp);
    suzuki.length = 1.5;
    suzuki.speed = 500;
    

    // with input

    // without space in the string
    cin >> suzuki.color >> suzuki.speed >> suzuki.speed;

    // with space in the string
    // cin.ignore();
    // cin.getline(b.name, 100);
    // cin >> b.roll >> b.cgp;

    cout << suzuki.color << " " << suzuki.length << " " << suzuki.speed << endl;
    // cout << b.name << " " << b.roll << " " << b.cgp << endl;


    return 0;
}