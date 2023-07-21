#include <stdio.h>
int main()
{
    int row, col, i, j, first[10][10], second[10][10], sum[10][10];

    printf("Enter the number of rows of matrix.\n");
    scanf("%d", &row);

    printf("Enter the number of columns of matrix.\n");
    scanf("%d", &col);

    printf("Enter the elements of first matrix\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &first[i][j]);

    printf("Enter the elements of second matrix\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &second[i][j]);

    printf("Sum of entered matrices:-\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}