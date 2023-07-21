#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k, n;
    printf("Enter any Number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = n; k >= i; k--)
            printf(" ");
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' - 1 + i);
             //printf("%c ", 64+j);     // both lines will give different output...
        }
        printf("\n");
    }
}