#include <stdio.h>
/*  In programming, iteration or iterasive function: denotes the repetition of lines of code,
                                                                      BY USING ANY LOOPS OR CONDITIONS...EXCLUDING FUNCTION CALL ITSELF;
                                                                      until a set of conditions is met.
                    Recursion or recursive function: denotes the repetition of any seprate function,
                                                                      a function calls itself many times...either from inside or outside that function;
                                                                      until a set of conditions is met.
                    The risk of an infinite loop, which is a loop that never ends, is much higher in recursion.*/

///////// Iterasive Strtergy For odd no. of stars to print..............            

void printPattern(int n);
int main()
{
    int n;
    printf("Enter the how many lines of stars ypu want : ");
    scanf("%d", &n);

    printPattern(n);
    return 0;
}
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
        for ( i = 0; i <n; i++)
        {
            for (int j = 0; j <= i; j++)          
            {
                printf("*");                                       
            }
            printf("\n");
        }

       
    }
}
