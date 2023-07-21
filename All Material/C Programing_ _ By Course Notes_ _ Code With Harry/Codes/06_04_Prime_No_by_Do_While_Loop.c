#include <stdio.h>

int main()
{
    // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.
    int n = 2, i = 2, prime = 1;

    printf("Enter the number that you want to check as prime or not. \n");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is not a prime number.\n", n);
        return 0;
    }
    if (n == 2)
    {
        printf("This is a prime number");
        return 0;
    }

    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < n);

    if (prime == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}