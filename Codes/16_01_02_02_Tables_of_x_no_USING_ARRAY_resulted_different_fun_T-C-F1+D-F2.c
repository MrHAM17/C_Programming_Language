#include <stdio.h>

int main()
{
    int n, i, k;
    printf("Enter the number that you wish to multiply : \n");
    scanf("%d", &n);

    printf("Enter how many times you want to multiply the number : \n");
    scanf("%d", &k);

    printf("***** Your Multiplication table of %d is ***** \n", n);

    int mul[k];
    for (int i = 0; i < k; i++)
    {
        mul[i] = n * (i + 1);
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d X %d = %d\n", n, i + 1, mul[i]);
    }
    void display(mul, k);
    return 0;
}
void display(int *mul, int k)
{
    printf("\n\nFor shortcut :\n");
    for (int i = 0; i < k; i++)
    {
        printf("\t\t%d\n", mul[i]);
    }
}