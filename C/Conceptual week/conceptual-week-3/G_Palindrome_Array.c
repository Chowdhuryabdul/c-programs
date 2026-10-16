#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }


    int left = 0;
    int right = n-1;
    int sob_mil = 1; /* why need this inidcator or flag variable. because after chheking we need to keep the result in a variable. so if two sides does not match that means it is not palliandrom. this is a information which we need to store this. so i have to store it in a indicator or flag.  */
   while (left < right)
   {
    if(arr[left] != arr[right]){
        sob_mil = 0;
        break;
    }
    left ++;
    right --;
   }
   if(sob_mil == 0){
    printf("NO");
   }else{
    printf("YES");
   }
    return 0;
}