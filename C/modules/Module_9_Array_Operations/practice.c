// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a [n + 1];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int index;
//     int value;
//     scanf("%d %d", &index, &value);
//     for(int i = n; i >= index + 1; i-- ){
//         a[i] = a [i - 1];
//     }
//     a[index] = value;
//      for(int i = 0; i <= n; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a [n];
    for(int i = 0; i < n; i ++){
         scanf("%d", &a[i]);
    }
    int i  = 0;
    int j = n -1 ;
    // while (i < j){
    //     int tmp = a[i];
    //     a[i] = a[j];
    //     a[j] = tmp;

    //     i++;
    //     j--;
    // }

    // we can do it by for..loop as well- nomrrally we work with a single variable, but here we are working with two variables. so we can use both variables in initializtion and in increment and decrement. we can use multiple variable but we jjust need to add coma between thses.
    for( int i = 0, j = n - 1 ; i < j; i++, j--){
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

     for(int i = 0; i < n; i ++){
         printf("%d ", a[i]);
    }

    return 0;
}
