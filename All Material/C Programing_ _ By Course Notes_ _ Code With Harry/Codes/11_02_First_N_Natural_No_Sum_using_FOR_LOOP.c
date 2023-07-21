#include <stdio.h>
int main()

///// sum of n natural no. using for loop..................

{
    int num;
    printf("For having the value of sum of first n natural numbers,\nEnter the value of n :  ");
    scanf("%d", &num);
    printf("\nThe sum of first %d natural numbers is %d .\n\n", num, sum(num));
    return 0;
}

int sum(int n)
{
    int add = 0;
    int i;
    for(i=1 ; i<=n ; i++ )
    {
        // add += i;            you can use this line also instead of line no. 19
        add=add+i;
    }
    return add;
}