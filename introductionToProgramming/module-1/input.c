#include<stdio.h>
int main()
{
    int a;
    float f;
    char c;
    // scanf("%d", &a);
    // scanf("%f", &f);
    scanf("%d %f %c", &a, &f, &c);
    printf("%.2f %d %c",f, a, c);
    return 0;
}

// & - it is used to change the value. for example we do not decalre any value for the a, but by defalut it has garbage value whhich is already stroed in the variable, but input it is given 400. so after scaninng the input it will replace the garbage value with 400 by this & sign. it is called address of (&). it is used to change the value.




