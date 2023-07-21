int main()
{
    // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers.

    int n, prime = 1;
    printf("Enter the number that you want to check as prime or not. \n");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("\n %d is not a prime number.\n\n", n);
        // break; ////////////////// YOU CAN USE BREAK STATEMENT ONLY WHITHIN LOOP OR SWITCH..................
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 0)
    {
        printf("\n %d  is not a prime number \n\n", n);
    }

    else
    {
        printf("\n %d  is a prime number \n\n", n);
    }

    return 0;
}