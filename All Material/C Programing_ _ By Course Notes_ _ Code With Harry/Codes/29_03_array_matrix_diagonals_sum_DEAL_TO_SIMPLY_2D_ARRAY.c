// Write a program that will accept two-dimensional square matrix and find the sum of diagonal elements. (Note- sum of diagonal elements should be calculated for both sides).

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, rows, columns, a[10][10], principal = 0, secondary = 0;
    printf("\n Please Enter Number of rows and columns : ");
    scanf("%d %d", &i, &j);
    printf("\n Please Enter the Matrix Elements \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            // Condition for principal diagonal
            if (rows == columns)
                principal += a[rows][columns];

            // Condition for secondary diagonal
            if ((rows + columns) == (i - 1))
                secondary += a[rows][columns];
        }
    }
    printf("\n The Primary and secondary principal diagonal sum = %d %d",
           principal, secondary);

    printf("\n The Sum of All Diagonal Elements of a Matrix = %d",
           principal + secondary);
    return 0;
}