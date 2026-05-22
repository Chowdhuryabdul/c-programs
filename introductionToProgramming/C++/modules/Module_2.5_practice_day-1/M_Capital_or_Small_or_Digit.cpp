#include<iostream>
// using namespace std;

int main()
{

char input;
std::cin >> input;
 if(input >= 'A' && input <= 'Z'){
    std:: cout << "ALPHA" <<std:: endl <<  "IS CAPITAL" << std::endl;
 }else if (input >= '0' &&  input <= '9'){
    std::cout << "IS DIGIT" << std:: endl;
 } else if(input >= 'a' && input <= 'z' ){
    std::cout << "ALPHA" << std::endl << "IS SMALL" << std::endl;
 }
 return 0;
 }
