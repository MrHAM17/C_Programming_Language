#include<stdio.h>


// THIS CODE IS GREAT. AS IT TAKES N NUMBER OF VALUES AS THE USER WANT..................5***................................


int main()
{
    int i, n, lar,sm, elem;
    printf ("Enter total number of elements n\n  ");
    scanf ("%d", &elem);
    printf ("Enter first number n\n  ");
    scanf ("%d", &n);
    lar = n;
    sm=n;
    for (i=1; i<= elem -1 ; i++)
    {
        printf ("n Enter another number n\n  ");
        scanf ("%d",&n);
        if (n>lar)
        lar=n;
        if (n<sm)
        sm=n;
    }
    printf (" The largest number is %d\n  ", lar);
    printf (" The smallest number is %d\n  ", sm);
    return 0;
}