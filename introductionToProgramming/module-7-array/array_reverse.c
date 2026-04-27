#include<stdio.h>
int main()
{
    // int arr[5];
    // we will take it from user, because out arry hasto be dynamic. here n means how many index will be given by user. so it dynamic.
    int n;
    scanf("%d", &n);
    // here we will declare a array of n size
    int a[n]; 
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = n-1; i >= 0; i--){
        printf("%d\n", a[i]);
    }
    return 0;
}
// here we have give n-1 - why?
// 1. we want to start from last index. so if loop has 10 index, so n-1 means 9 which is the last index. 
// so we have start from n-1 and will stop in 0. 
// 2. we need to write in the condion i<0. here one interesting point is to check the condition properly. let say i have 4 index array, so it will start from n-1 means 3. according to the currect condtion 3<0, is this correct? No, 3 is bigger than 0. then loop will not run with this condition. rather we have to reverse the sign > instead of < in this condition. 
// 3. and it will be decrement each time, so i--.