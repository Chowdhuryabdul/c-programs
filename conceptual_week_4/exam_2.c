#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
 int num = 1;
 int space = n-1;

 for(int i = 1; i <= n; i++){
    
    // print space
    for(int k = 1; k <= space; k++){
        printf(" ");
    }
    
    // print digit
    for(int j = num; j > 0; j--){
        printf("%d", j);
    }
    
    
    printf("\n");
    num++;
    space--;
 }   
    return 0;
}