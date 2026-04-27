#include<stdio.h>
int main()
{
    // int a [4];
    
    // now we can verty this array in charecter array
    char a [4];
    for( int i = 0; i < 4; i++){
        scanf("%c", &a[i]);
    }
    for( int i = 0; i < 4; i++){
       printf("%c\n", a[i]);
    }
    return 0;
}