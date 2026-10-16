#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s %s", &a, &b);
    // printf("%s %s", a, b);
    char len_b = strlen(b);
    for(int i = 0; i <= len_b; i++){
       a[i] = b[i];
    }
    printf("%s %s", a, b);

    return 0;
}

/* Note:-
--> here we are copying apple and set in the orang array.
--> Rules is that the string will be copied, we will run loop on that string. Here we will copy the apple string so we have run the loop on apple string.
--> here in the orange string are 5 index and last index is e, and the apple string has 4 index and last index is e. after copying the the apple and placing it in the ornage array. we have one letter or index e is still there. so when it prints after copying it will print apple with extra e from orange.
--> in this case we have to copy the null char after finishing the copying of apple so it will stop there. to copying null from apple string we can run the loop i <= lenght of apple. here apple has total 4 index which means 5. when loop comes to last index e the value will be 4. but i is still small than the size of array which is 5. when it comes to last round value of i will be 5 and length will be also 5. by placing equal = in the condition, condition is still true. then it will copy the null char after copying all the elements and place after the last element of the apple in the orange. when null is there, it will not print anythhing left over from orange array. */