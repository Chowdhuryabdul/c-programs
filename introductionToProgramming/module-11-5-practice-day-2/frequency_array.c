#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    // Frequency array-why 6 - because types of elements is 6 in the input. if you give the value 0 for the 0 index, then all other will be also 0

    // here we have solved to avoid taking lot of variables based on the size of array-  int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    int frequencyArray [6] = {0};
    for(int i = 0; i < n; i++){ /* here one thing is very common which is - if the value of array of i is 0, then we go to 0 index in frequencyArray. it is repeating in the whole condition. we can make it shorter- by just frequencyArray[a[i]]++. it means as the index value of frequencyArray and a[i] is same then just do the increment 
    here logic is as, if value of array of i / a[1] is 0, then we go to the 0 index of frequencyArray. so we need to know what is the value of a[i]. then we can set the value in the frequencyarray. we can keep the value of a[i] in a variable then we can set it inside the frequecyarray. so value of varibale can 0, 1, 2, 3, or any index
        */
 int value = a[i];
frequencyArray[value]++;

        /* if(a[i] == 0){
            frequencyArray[0]++;
        }
        if(a[i] == 1){
            frequencyArray[1]++;
        }
        if(a[i] == 2){
            frequencyArray[2]++;
        }
        if(a[i] == 3){
            frequencyArray[3]++;
        }
        if(a[i] == 4){
            frequencyArray[4]++;
        }
        if(a[i] == 5){
            frequencyArray[5]++;
        } */
    }

        /* this loop run for the frequencyArray that is why condition is i<6 */
    for(int i = 0; i<6; i++){

        printf("%d --> %d\n", i, frequencyArray[i]);
    }
  /*   printf("%d --> %d\n", 1, frequencyArray[1]);
    printf("%d --> %d\n", 2, frequencyArray[2]);
    printf("%d --> %d\n", 3, frequencyArray[3]);
    printf("%d --> %d\n", 4, frequencyArray[4]);
    printf("%d --> %d\n", 5, frequencyArray[5]); */
    return 0;
}