#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    // initialize first and second terms
    int t1 = 0, t2 = 1;
    // initialize the next term (3rd term)
    int nextTerm = t1 + t2;
    // get no. of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n==0)
    {
        printf("Ok!\nYou don't want fibonacci series.");
        return 0;
    }

     if (n==1)
    {
        printf("Your fibonacci series is : 0.");
        return 0;
    }

     if (n==2)
    {
        printf("Your fibonacci series is 0,1.");
        return 0;
    }
    
    // print the first two terms t1 and t2
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    // print 3rd to nth terms
    for (i = 3; i <= n; ++i)
    {
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
    getch();
}