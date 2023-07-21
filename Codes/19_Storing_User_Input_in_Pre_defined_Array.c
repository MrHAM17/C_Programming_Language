#include <stdio.h>

// HERE WE CREATE ON THE SPOT ARRAY WHOSE SIZE will THE USER DECIDE.....
// SO NO WASTAGE OF MEMORY......
int main()
{
    int n, i, j, k;
    printf("Enter the number that you wish to multiply : \n");
    scanf("%d", &n);

    printf("Enter how many times you want to multiply the number : \n");
    scanf("%d", &k);
    if (k == 0)
    {
        printf("***** Your Multiplication table of %d is ***** \n", n);
        printf("\t\t%d x %d =  0 \n", n, k);
        return 0;
    }

    printf("***** Your Multiplication table of %d is ***** \n", n);

    int multiply[k];
    for (i = 0; i < k; i++)
    {
        multiply[i] = n * (i + 1);
    }

    for (i = 0; i < k; i++)
    {
        printf("\t\t%d x %d =  %d \n", n, i + 1, multiply[i]);
    }
    return 0;
}
