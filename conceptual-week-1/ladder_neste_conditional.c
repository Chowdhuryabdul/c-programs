#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if(number > 32){
        printf("he passed the exam\n");
    if(number > 100){
        printf("it is invalid number");
    }
    else if(number >= 80 && number <= 101){
        printf("it is A+");
    }else if(number >= 70 && number <= 80)
    {
        
        if(number >= 75){
            printf("it will be A");
        }else{
            printf("it will be A-");
        }
    }
    else if(number >= 60){
        printf("it is B Grade");
    }else if(number >=50){
        printf("it is c grade");
    }else if(number >= 40){
        printf("it is D grade");
    }else if(number >= 30){
        printf("it is E grade");
    }
    }
    else{
        printf("U R FAIL");
    }
    
    return 0;

}