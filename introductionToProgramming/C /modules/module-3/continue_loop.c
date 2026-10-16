#include<stdio.h>
int main()
{
    int num = 20;
    for(int i = 0; i <= num; i++){
        if(i == 5){
            continue;
        }
        printf("%d", i);
        printf("hello\n");
    }
}

// continue usually skip the value which you said to skip to continue. it for example we ant to print from1 to 10. but we do not wnat to prinnt 5, so we will print all, but skip the 5. which we can do by continue method.when it matches with the condition it does not go to the down to print, rahter skip this processjust for that particuclar value which is set inn codition and go up to the loop and continue the further process.here he prints all with the hello word except 5, because when he finds that conditon meets then he does come to down, just skip the process.