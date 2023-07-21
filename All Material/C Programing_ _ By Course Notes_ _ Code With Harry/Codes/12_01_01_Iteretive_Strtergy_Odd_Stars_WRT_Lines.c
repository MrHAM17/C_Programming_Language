#include <stdio.h>

/*  In programming, iteration denotes the repetition of lines of code, until a set of conditions is met.
                  Recursion, or recursive function, on the other hand, is a function that calls itself.The risk of an infinite loop,
                  which is a loop that never ends, is much higher in recursion.*/

///////// Iteretive Strtergy For Whatever the Line no. the Same no. of stars to print  on that line..............

void printPattern(int n);
int main()
{
    int n;
    printf("Enter the how many lines of stars ypu want : ");
    scanf("%d", &n);

    printPattern(n);
    return 0;
}
// for n = 3
// *
// ***
// *****
// 1 - 1
// 2 - 3
// 3 - 5
// (2n-1)
void printPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }

    else
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (int j = 0; j < (i + i + 1); j++)
            {
                printf("*");
            }
            printf("\n");
        }


        ////////////////// from WHILE LOOP it is impossibe for me.........Below commented part not work........
        // int i = 0, j = 0;
        // while (i < (j + j + 1)) 
        // { 
        //     while (i < (j + j + 1))
        //     {   
        //       printf("*");                         ///// You can check by removing comment's symbol...
        //       j++;
        //       if (j < n)
        //       {
        //          return 0;
        //       }
        //     }
        // }
    }
}
