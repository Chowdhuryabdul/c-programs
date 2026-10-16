#include<iostream>
using namespace std;

int main()
{
 /*  int a[16] = {10, 20, 30, 40, 50, 60};
  for (int i = 0; i < 6; i++)
  {
    
      cout << a[i] << endl;
  } */
 int x;
 cin >> x;
 cin.ignore();
  char s[300];
//   cin >> s; /* it can not take input string with space */

//   fgets(s, 300, stdin); it is in c program to get string input with space
//   printf("%s", s);
 cin.getline(s, 300);
  cout << s << " " << x << endl;
  


//   there is a problem with the fgets or cin.getline
// first of all if i have one integer input.
// and the next line we have a string input. 
// by this method it will take first integer and than the enter command which we pressed to come the next line. it will take this enter as next input. and then it will not print the hello world.in the getline method it will just print the 20, not the hello world. so to avoid the enter-command, in c programming we used to give space before %c. here we have built in method. which is ignore function.
  

}