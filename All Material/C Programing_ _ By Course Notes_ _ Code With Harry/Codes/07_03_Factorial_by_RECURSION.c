#include <stdio.h>

//// RECUURSION  means doing a certain task by calling a same function ,repetadely...

int main()
{
    int n, i, f;
    i = f = 1;
    printf("\nEnter the number whose factorial yo want.\n");
    scanf("%d", &n);

    printf("The value of factorial of %d is %d. \n\n", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
