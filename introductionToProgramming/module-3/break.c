#include<stdio.h>
int main()
{
    int num = 10;
    for( int i = 0; i <= num; i++){
        //  printf("%d\n", i); if we take printf befoe the condtion it will print 5 because we know it execute from up, so if printf is up it will go there as compare the value of i when it comes to 5. so it is not bigger than 5 rather it is similar. so it will break after that.
        if(i == 5){
            break;
        }
       printf("%d\n", i); /* but here it will not publish 5 because i == 5, so conditionn is true it will break. because we have written the printf after the break. whenever it get break it will immediately stop the whole process. */
    }
    return 0;
}