#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    
    int ans = ceil(4.3); /* answer is 5 */
    printf("%d\n", ans);
    int ans1 = floor(4.9); /* answer is 4 */
    printf("%d\n", ans1);
    int ans2 = round(4.6); /* answer is 5 */
    printf("%d\n", ans2);
    int ans3 = round(4.4); /* answer is 4 */
    printf("%d\n", ans3);
    int ans4 = sqrt(25); /* answer is 5 */
    printf("%d\n", ans4);
    // square anumber which will provide the fraction. if i do it with int it will give me the just int value without fraction. but if we do with double then will get with the fraction
    int ans5 = sqrt(20); /* here it gives only integer 4 */
    printf("%d", ans5);

    double ans6 = sqrt(20); /* here it gives this - 44.472136 */
    printf("%lf\n", ans6);

    // power function - will give the square of the one value
    int ans7 = pow(2,2); /* here first 2 is main integer and second 2 is power - result is 4*/
    printf("%d\n", ans7);

    int ans8 = pow(3, 4); /* reuslt is 81 */
    printf("%d\n", ans8);

    // absolute function


    int ans9 = abs(-10); /* answer is 10 and i need to use the seperate header for this which is stdlib.h */
     printf("%d", ans9);
    return 0;
}