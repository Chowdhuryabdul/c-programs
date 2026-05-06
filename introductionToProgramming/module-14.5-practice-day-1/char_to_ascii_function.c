// retunr plus parameter
/* 
#include<stdio.h>


int char_to_ascii(char ch ){
  int conversion = (int)ch;
    return conversion;
}


int main()
{
    char ch;
    scanf("%c %c", &ch);
    // printf("%c", ch);
    int result = char_to_ascii(ch);
    printf("%d", result);
    return 0;
} */

// return, but without parameter
// #include<stdio.h>


// int char_to_ascii(){
//     char ch;
//     scanf("%c %c", &ch);
//     int conversion = (int)ch;
//     return conversion;
// }


// int main()
// {
    
//     // printf("%c", ch);
//     int result = char_to_ascii();
//     printf("%d", result);
//     return 0;
// }

// no return, no parameter
// #include<stdio.h>
// int char_to_ascii(){
//     char ch;
//     scanf("%c %c", &ch);
//     int conversion = (int)ch;
//     printf("%d", conversion);
// }

// int main()
// {   
//     char_to_ascii();
//     return 0;
// }
// no return, with parameter
#include<stdio.h>
void char_to_ascii(char ch){
    int conversion = (int)ch;
    printf("%d", conversion);
}

int main()
{   char ch;
    scanf("%c", &ch);
    char_to_ascii(ch);
    
    return 0;
}