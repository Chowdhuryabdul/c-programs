#include<stdio.h>
#include<string.h>
int main()
{
   char a[102], b[102];
   scanf("%s %s", &a, &b);
  

   int len_a = strlen(a);
   int len_b = strlen(b);

   for(int i = 0; i<= len_b; i++){
    a[i + len_a] = b[i];
   }
    printf("%s %s", a, b); 
    return 0;
}
/* 
Note:-
--> a[i + len_a] --> value of i is 0 and + lenght of a is 3 = reulst is 3.
   --> it will start to set the new element from the 3rd index of array a. 
   --> loop will proceed and add value and workd */



