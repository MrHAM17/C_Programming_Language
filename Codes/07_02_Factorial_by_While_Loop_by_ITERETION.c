#include <stdio.h>

//// ITERATION  means doing a certain task ( without calling a same function repetadely ) by using loops or conditional statements...


int main()
{
    int n, i, f;
    i = f = 1;
    printf("\nEnter the number whose factorial yo want.\n");
    scanf("%d", &n);
    while (i <= n)
    {
        f *= i;
        i++;
    }

    printf("The value of factorial of %d is %d.\n\n", n, f);

    return 0;
}
