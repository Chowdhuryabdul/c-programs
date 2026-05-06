// // with return and parameter

// #include<stdio.h>

// int small_to_capital( char ch){
//     char conversion = (int)ch;
//     char smallToCapital = conversion - 32;
//     return smallToCapital;
// }


// int main()
// {
//     int ch;
//     scanf("%c", &ch);
//     int result = small_to_capital(ch);
//     printf("%c", result);
//     return 0;
// }

// // with return no parameter
// #include<stdio.h>

// int small_to_capital(){

//     int ch;
//     scanf("%c", &ch);
//     char conversion = (int)ch;
//     char smallToCapital = conversion - 32;
//     return smallToCapital;
// }


// int main()
// {
    
//     int result = small_to_capital();
//     printf("%c", result);
//     return 0;
// }

// // no return no parameter
// #include<stdio.h>

// void small_to_capital(){

//     int ch;
//     scanf("%c", &ch);
//     char conversion = (int)ch;
//     char smallToCapital = conversion - 32;
//     printf("%c", smallToCapital);
    
// }


// int main()
// {
    
//     small_to_capital();
//     return 0;
// }
// no return with parameter
#include<stdio.h>

void small_to_capital(char ch){

   
    char conversion = (int)ch;
    char smallToCapital = conversion - 32;
    printf("%c", smallToCapital);
    
}


int main()
{
     int ch;
    scanf("%c", &ch);
    small_to_capital(ch);
    return 0;
}