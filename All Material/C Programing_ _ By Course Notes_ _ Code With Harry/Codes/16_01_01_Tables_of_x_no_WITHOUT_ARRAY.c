#include <stdio.h>
int main()
{
    int n, i, k;
    printf("Enter the number that you wish to multiply : \n");
    scanf("%d", &n);

    printf("Enter how many times you want to multiply the number : \n");
    scanf("%d", &k);

    printf("***** Your Multiplication table of %d is ***** \n", n);

    for (i = 01; i <= k; i++)
    {
        printf("\t\t%d x %d =  %d \n", n, i, n * i);
    }
    return 0;
}