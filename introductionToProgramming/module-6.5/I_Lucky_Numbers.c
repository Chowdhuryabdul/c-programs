#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
   int firstDigit = n / 10;
//    printf("%d\n", firstDigit);
   int secondDigit = n % 10;
//    printf("%d\n", secondDigit);
if(secondDigit == 0 || firstDigit == 0){
    printf("YES");
}
else if(firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0){
    printf("YES");
}else{
    printf("NO");
}
    return 0;
}