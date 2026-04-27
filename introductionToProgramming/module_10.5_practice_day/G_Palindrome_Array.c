#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
    }
    
   
    int flag = 1;
    for( int i = 0, j = n - 1; i < j; i++, j--){
          if( a[i] != a[j] ){
             printf("NO");
             flag = 0;
             break;
        }
            
        
    }
    if(flag == 1){

        printf("YES");
    }
    return 0;
}

/* scenerio is that when i am outside of array print yes, the moment we will print this. we have to know that previous NO is being printed or not. as we do not know that then we will print both yesno. it is not correct. 
in this case we have to take a flag value as indicator. in the flag value we can assign any sort of value.
when we are in first condition inside the loop, if we print no then flag value will be changed, so the print, outside the loop can recognize it.
then out side hte loop we will make a codition as if flag value is same as it is delcared then print yes. */