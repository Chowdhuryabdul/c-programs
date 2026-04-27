#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int M1, M2, D;
        // int M2;
        // int D;
        scanf("%d %d %d", &M1, &M2, &D);
        
        int totalEmployee = M1 + M2;
        int TotaldaysNeeded = (M1 * D)/totalEmployee;
        int neededFewerdays = D - TotaldaysNeeded;
        printf("%d\n", neededFewerdays);
    }
    return 0;
}