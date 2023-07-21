#include <stdio.h>

 //////////////////////// AIM OF CODE :: void function can not return any respective value or data.
               //                        But by using pointers , it is possible to return any respective value or data from void function. 
              
               //                        for that, we'he to give respective variable's address to void function by callling it.
               //                        then we've to create specific pointer for that respective variable's address
               //                        then do whatever calculation that you need.so your output or result will store in that variable's address.
               //                        lastly,by just simply definig your variable ; the result or output will show their...
               ///////////               for example: refer the sum and avg variables from following program..................

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int i, j, sum;
    float avg;

    printf("Enter the value of i :\n");
    scanf("%d", &i);

    printf("Enter the value of j :\n");
    scanf("%d", &j);


    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value of avg is %f \n", avg);

    // printf("The value of sum is %d \n", (*sum));        will not work............
    // printf("The value of avg is %f \n", (*avg));        will not work............

    // printf("The value of sum is %d \n", *(sum));        will not work............
    // printf("The value of avg is %f \n", *(avg));        will not work............
    return 0;
}