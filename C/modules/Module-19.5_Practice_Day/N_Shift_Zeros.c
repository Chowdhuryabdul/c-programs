#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != 0){
            a[index] = a[i];
            index++;        
    }
}

while(index < n){
    a[index] = 0;
    index++;
}
 for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }  
    return 0;
}