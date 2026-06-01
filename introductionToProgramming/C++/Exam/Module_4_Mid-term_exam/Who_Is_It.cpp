#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int id;
    string name;
    char section;
    int marks;
};

int main(){
    
    int t;
    cin >> t;
    while(t--){
      Student number1, number2, number3;
      
      cin >> number1.id >> number1.name >> number1.section >> number1.marks;
      cin >> number2.id >> number2.name >> number2.section >> number2.marks;
      cin >> number3.id >> number3.name >> number3.section >> number3.marks;


      Student best = number1;

      if(number2.marks > best.marks || number2.marks == best.marks && number2.id < best.id){
        best = number2;
      }
      if(number3.marks > best.marks || number3.marks == best.marks && number3.id < best.id){
        best = number3;
      }

      cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }
    
    return 0;
}