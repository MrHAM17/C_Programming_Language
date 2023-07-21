#include <stdio.h>

/*  In programming, iteration denotes the repetition of lines of code, until a set of conditions is met.
                  Recursion, or recursive function, on the other hand, is a function that calls itself.The risk of an infinite loop,
                  which is a loop that never ends, is much higher in recursion.*/


///////// Recursive Strtergy For even no. of stars to print..............

void printPattern(int n);
int main()
{
    int n ;
    printf("Enter the how many lines of stars ypu want : ");
    scanf("%d",&n) ;

    printPattern(n);
    return 0;
}
// for n = 3
// *
// **
// ****
// ******
// 1 - 1
// 2 - 2
// 3 - 4
// 4 - 6
// (2n-2)
void printPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printPattern(n - 1);
    for (int i = 0; i < (n); i++)
    {
        printf("*");
    }
    printf("\n");
}
