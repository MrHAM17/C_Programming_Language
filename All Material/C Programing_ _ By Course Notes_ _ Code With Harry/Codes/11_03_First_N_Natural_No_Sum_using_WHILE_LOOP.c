#include <stdio.h>
int main()

///// sum of n natural no. using while loop..................

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
    int i = 1;

    while (i <= n)
    {
        add = add + i;
        //     // add += i;            you can use this line also instead of line no. 27

        i++;
    }

    return add;
}