#include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

int main()
{
    int n, i, k, sum = 0;
    printf("Enter the number that you wish to multiply : \n");
    scanf("%d", &n);

    printf("Enter how many times you want to multiply the number : \n");
    scanf("%d", &k);

    printf("***** Your Multiplication table of %d is : ***** \n", n);

    for (i = 01; i <= k; i++)
    {
        printf("\t\t%d x %d =  %d \n", n, i, n * i);
        sum = sum + n * i;
    }
    printf("\nAnd the total sum of your multiplication table is :\nsum = %d", sum);
    return 0;
}