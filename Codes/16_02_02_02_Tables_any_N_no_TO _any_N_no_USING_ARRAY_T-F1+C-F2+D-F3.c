

// 16_02_02_02_Tables_any_N_no_TO _any_N_no_USING_ARRAY_T-F1+C-F2+D-F3.c

#include <stdio.h>
int n, i, j, a, start, end, r, table;
int main()
{
    printf("\nEnter first number from where you want to start multiplication : \n");
    scanf("%d", &start);
    printf("Enter Last number from where you want to end multiplication : \n");
    scanf("%d", &end);
    printf("Enter how many times you want to multiply the number.\n");
    scanf("%d", &r);
    if (end < start)
    {
        printf("Last number should be greater than %d.", start);
    }
    CALCULATE(start, end, r);
    return 0;
}

void CALCULATE(int start, int end, int r)
{

    for (i = start; i <= end; i++)
    {
        int table[100]; // here we have to give compulsory limit for array BEFORE GOING TO USE.... OTHERWISE code will give some garbedge value;
                        // WHEN WE GIVE THE INPUT BEYOND A CERTAIN LIMIT WITH REAPECT TO ARRAY'S LIMIT......
        for (j = 0; j <= r; j++)
        {
            table[j] = (i) * (j + 1);
        }
        display(table, start, end, r);
    }
}

void display(int *table, int start, int end, int r)
{
        printf("\nMultiplication table of %d is :\n", i);
        for (int k = 0; k < r; k++)
        {
            printf("\t%d x %d = %d\n", i, k + 1, table[k]);
        }
}