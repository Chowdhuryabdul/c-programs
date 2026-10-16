#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    // printf("%d", strcmp(a,b));
    int value = strcmp(a, b);
    if(value < 0){
        printf("A is samller");
    }else if(value == 0){
        printf("Equal");
    }else if(value > 0){
        printf("B is samller");
    }
    return 0;
}

/* Note:-
--> it returns an integer value;
--> if first one is small it returs -1; 
--> if both are same, returs 0;
--> if second one is small, returns 1 
--> In many compiler it returns negative value it could be -2/-3 or anything. it is same in case of positive value as well.
*/