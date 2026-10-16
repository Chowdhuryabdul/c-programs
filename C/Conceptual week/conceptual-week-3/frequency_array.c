#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }

    // int count0 = 0;
    // int count1 = 0;
    // int count2 = 0;
    // int count3 = 0;
    // int count4 = 0;
    // int count5 = 0;
    // int count6 = 0;

//    we have reduced the seperate variable declaration into 1 array
    int countArray[8] = {0};   
    for (int i = 0; i < n; i++)
    {
        // we can keep the value in a variable
        int val = arr[i];
        countArray[val]++;
        // countArray[arr[i]]++; this is direct way to do
        
        /* here we have noticed that the value of array of i is the same as index of countArray. so if we simply put array of i inside the countArray or frequency array then it will be fine */
    
    //    if(arr[i] == countArray[i]){
    //     countArray[i]++;
    // }
    // else if(arr[i] == 1){
    //         // count1++;
    //         countArray[1]++;
    //        }
    //     else if(arr[i] == 2){
    //             // count2++;
    //             countArray[2]++;
    //            }
    //         else if(arr[i] == 3){
    //                 // count3++;
    //                 countArray[3]++;
    //                }
    //             else if(arr[i] == 4){
    //                     // count4++;
    //                     countArray[4]++;
    //                    }
    //                 else if(arr[i] == 5){
    //                         // count5++;
    //                         countArray[5]++;
    //                        }
    //                     else if(arr[i] == 11){
    //                             // count6++;
    //                             countArray[6]++;
    //                            }
                        }
    // this loop run on the frequency array that is why it will run until 8
   
    for(int i = 0; i < 8; i++){

        printf("%d -> %d\n",i, countArray[i]);
    }
    // printf("%d -> %d\n",1, countArray[1]);
    // printf("%d -> %d\n",2, countArray[2]);
    // printf("%d -> %d\n",3, countArray[3]);
    // printf("%d -> %d\n",4, countArray[4]);
    // printf("%d -> %d\n",5, countArray[5]);
    // printf("%d -> %d\n",6, countArray[6]);
    
    return 0;
}