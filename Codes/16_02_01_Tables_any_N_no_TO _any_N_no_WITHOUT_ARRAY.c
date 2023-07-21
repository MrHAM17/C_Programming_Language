#include <stdio.h>
// declaring variables
    int n, i, j, a, start, end;
int main()
{
    
    // taking and printing the instructions
    printf("\nEnter first number from where you want to start multiplication : \n");
    scanf("%d", &start);
    printf("Enter Last number from where you want to end multiplication : \n");
    scanf("%d", &end);
    printf("Enter how many times you want to multiply the number.\n");
    scanf("%d", &j);
    if (end < start)
    {
        printf("Last number should be greater than %d.", start);
    }

    // using loops

    for (n = start; n <= end; n++)
    {
        printf("\nMultiplication has started of %d.\n\n", n);
        a = 0;
        for (i = 1; i <= j; i++)
        {
            a += n; // setting the value of a. i used addition instead of multiplication
            // because computer takes too much time for multiplating numbers than doing addition

            printf("%d x %d = %d\n", n, i, a);
        }
        printf("Multiplication has ended of %d.\n\n", n);
    }

    return 0;
}
