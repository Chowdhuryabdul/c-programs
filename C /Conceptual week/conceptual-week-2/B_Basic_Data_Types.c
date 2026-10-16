#include<stdio.h>
int main()
{
    int integer;
    long long int extralong;
    char ch;
    float a;
    double d;
   scanf("%d %lld %c %f %lf", &integer, &extralong, &ch, &a, &d);
   printf("%d\n", integer);
   printf("%lld\n", extralong);
   printf("%c\n", ch);
   printf("%.2f\n",a);
   printf("%g",d);
   return 0;
}