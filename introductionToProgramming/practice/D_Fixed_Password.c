#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n != EOF){
        if(n == 2000){
        printf("Correct\n");
        break;
    }
    else{
        printf("Wrong\n");
    }
}
    return 0;
}