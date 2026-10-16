#include<stdio.h>
// #include<string.h>

int count_charecter(char s[], int i)
{
 if(s[i] == '\0'){   /* null charecter is '\0' */
    return 0; /* why i set here 0 this is because of when we will hit the null character we will return as null is not countable so we consider it as 0 to start counting the latter */
 } 

 int count = count_charecter(s, i+1); /* this count variable will store all the results which is counted */
  if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            // count++;
            return count + 1;/*  it means the one is counts it is also a charcter and previous one is also a character that is  */
        }else{
            return count;
        }
}



int main()
{
    char s[201];
    fgets(s, 201, stdin);
  
    // int count = 0;
    /* for(int i = 0; i < s_len; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    } */
  int result =  count_charecter(s, 0);
    printf("%d", result);
    return 0;
}



/* count caracter by recusive function--
word is "hello\n"
when we start from h we do not know how many character after h, then will go to e then we do not know how many after e, then l, then l, then o. here we do not know that the string is finised or not. then when we find the null then understand that it is finished. when we got null charecter then we got sure that string is finished.
after getting null charecter, we can return a 0 from here. why we return 0? this is because null charecter is not part of the charecter if we count this then charecter size will be 6. so that is why we send 0.

From the 0 it will go to o as we know that the function goes back the point where it is called. when o return the 0 then o realise that there 0 charecter remain after o. as o itslef a charecter, then he will add 1 of himself with 0 and return to the next character l.

when l receive 1 then he undersand there are one charecter before him which is o. so he will add his number 1 with his idea that there is one character before him. this 2 will will send to the next l whoi is called him before.

when l receives 2, then he will think there are 2 charecter behind him which are l o, the he send his to further his own number 1 ann + 2 - total 3 to the next character.

when e receives 3, then he will think there 3 charecter behind him which l l o, so he will send his number 1 wit 3 toltal 4 to the next character

when h receive the 4  and he found 4 charecter behind him which are e l l o, so he add his number 1 with 4 - total 5 */


/* how recusrsion works here-- word is hello - length 6 with null. but we will not count null

// First step to run forward 

First step-->>
--> when it is called from the main function, the value of i = 0 and array_s = 6
--> condition is false. becuase if er go to string we get h not null
--> count_charecter function is called, here array_s is same, but i+1 = 0+1= 1;

second step-->
-->array_s is same and value of i is 1
-->condition is false. if we go to string we get e not null
--> count_charecter function is called, here array_s is same, but i + 1 = 1 +1 = 2

third step-->>
-->array_s is same and value of i is 2
-->condition is false. if we go to string we get l not null
--> count_charecter function is called, here array_s is same, but i + 1 = 2 +1 = 3

fourth step-->>
-->array_s is same and value of i is 3
-->condition is false. if we go to string we get l not null
--> count_charecter function is called, here array_s is same, but i + 1 = 3 +1 = 4


fifth step-->>
-->array_s is same and value of i is 4
-->condition is false. if we go to string we get o not null
--> count_charecter function is called, here array_s is same, but i + 1 = 4 +1 = 5

sixth step-->>
-->array_s is same and value of i is 5
-->condition is true. if we go to string we get null
--> we will go inside the if condition. we get return 0. it will send to that line where it is called 


// second step to return and count

this function (first count_charecter, not the recursive function) will comebcak that line  where it is called - it is called from the previous recursive function. here we have taken a variable to stroe the value which will be returned. so 0 value returned from previous function which will be stored in count valruable. then it will go next line where it find return again here he will add 1 with ccount = 0 +1 = 1

this function (first count_charecter, not the recursive function) will comebcak that line  where it is called - it is called from the previous recursive function. here we have taken a variable to stroe the value which will be returned. so 1 value returned from previous function which will be stored in count valruable. then it will go next line where it find return again here he will add 1 with ccount = 1 +1 = 2

this function (first count_charecter, not the recursive function) will comebcak that line  where it is called - it is called from the previous recursive function. here we have taken a variable to stroe the value which will be returned. so 2 value returned from previous function which will be stored in count valruable. then it will go next line where it find return again here he will add 1 with ccount = 2 +1 = 3

this function (first count_charecter, not the recursive function) will comebcak that line  where it is called - it is called from the previous recursive function. here we have taken a variable to stroe the value which will be returned. so 3 value returned from previous function which will be stored in count valruable. then it will go next line where it find return again here he will add 1 with ccount = 3 +1 = 4

this function (first count_charecter, not the recursive function) will comebcak that line  where it is called - it is called from the previous recursive function. here we have taken a variable to stroe the value which will be returned. so 4 value returned from previous function which will be stored in count valruable. then it will go next line where it find return again here he will add 1 with ccount = 4 +1 = 5

after this it will go to the main function and print the result */