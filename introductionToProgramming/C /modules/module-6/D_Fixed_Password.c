#include<stdio.h>
int main()
{
    int pass;
    while(scanf("%d", &pass)){

        if (pass == 1999){
            printf("Correct\n");
            break ;
        }else{
            printf("Wrong\n");
        }
    }
   
    
    return 0;
}

// we can  this by the for loop then it would be like this for( ;scanf("%d", &pass); ) - we need to have the free space at the beginning of the loop as there is nothing too initialization and at the end also as nothing to increment and decrement. 

// if in case of EOF - end of file, as i do not kow how many times i need to run the loop. in such cas input is the file it can contain uncountable numbers. it means we do not know that howw many input will be. so in such case we need to run the loop until the input is finished. as it does not say how many inputs is in the input file.  in such case we will use while--loop. while loop runs until it finsh the expected work. we can also write -- while(scanf("%d", &pass) != EOF) - it means it will run untill the EOF. 
// if there is a such condition where i just need to write condition, no initializationa and increment and decrement then i shoudl use while loop