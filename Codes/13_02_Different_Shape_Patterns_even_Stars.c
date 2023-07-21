#include <stdio.h>
#include <conio.h>
int main()
{
    int i, space, rows, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i + 1; space++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
