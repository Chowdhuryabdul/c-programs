#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // this is normal order
    // int starChange = 1;
    // int space =n-1;

    // this is reverse order
    int starChange = 2*n-1;
    int space =0;
    
    for(int i = 1; i <= n; i++){
        
        for(int k = 1; k <= space; k++){
            printf(" ");
        }
        for(int j = 1; j <= starChange; j++){
            printf("*");
        }
        // this is normal order
        // space--;
        // starChange+=2;

        // this is reverse order
        space++;
        starChange-=2;
        printf("\n");
    }
    return 0;
}