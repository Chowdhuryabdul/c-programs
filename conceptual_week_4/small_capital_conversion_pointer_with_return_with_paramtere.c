#include<stdio.h>
#include<string.h>


//retun with parameters
/* this is one way--- I can do this by seperate functions

int count_capital(){
    return;
}
int count_digit(){
    return;
}
int count_small(){
    return;
} */


// The another way is to send by referece and receive by pointer and derefrencing and no return the result

void count_captial_small_digit(char str[], int arr[]  ) /* rcv here with pointer */

{
     int len = strlen(str);

    // int cnt_sml = 0, cnt_cap = 0, cnt_dgt = 0;
    // we can do it by array
    // int arr[3] = {0};
    for(int i = 0; i < len; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            
            // dereferencing it 
            // (*cnt_dgt)++;

            // Both are same
            // arr[0]++;
            *arr = *arr + 1; /* - here by left value(*arr) - gets the memory location that arr points to. second *arr - take the value that stored */
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            // (*cnt_sml)++;
        // arr[1]++;
        *(arr+1) = *(arr+1) + 1;
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            // (*cnt_cap)++;
            //  arr[2]++;
            *(arr+2) = *(arr+2) + 1;
        }
    }
    //  printf("Count Digit: %d Count Capital: %d  Count Small: %d", arr[0], arr[2], arr[1]);
    
}


int main()
{
    char str[101];
    scanf("%s", &str);
    int arr[3] = {0};
    // int cnt_sml = 0, cnt_cap = 0, cnt_dgt = 0;

    // send them by reference
//  count_captial_small_digit(str,  &cnt_dgt, &cnt_sml, &cnt_cap);
 count_captial_small_digit(str,  arr);

 //  print them
  printf("Count Digit: %d Count Capital: %d  Count Small: %d", arr[0], arr[1], arr[2]);
    return 0;
}




// if i need to take input inn the mian function and print from the main function.
// in this ase either i have to return, or i have send the value pass by refference then need to work
// it is possible to do this in the seperate function