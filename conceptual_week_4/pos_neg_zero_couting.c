#include<stdio.h>

// int counting_pos_sma_zero(int a) - it is print integer

char counting_pos_sma_zero(int a)
{
 if(a < 0){
    // return -1;
    return 'N';
 }else if(a > 0 ){
    // return 1;
    return 'P';
 }else{
    // return 0;
    return 'Z';
 }
}

int main()
{
    
    
    int n;
    scanf("%d", &n);
    int ret = counting_pos_sma_zero(n);
    // postive

    // if(ret == -1)
    if(ret == 'N')
    
    {
        printf("Positive\n");
    }

    // negative
    // else if(ret == 1)
    else if(ret == 'P')
    
    {
        printf("Negative\n");
    }


    // zero
    else{
        printf("Z");
    }
    return 0;
}