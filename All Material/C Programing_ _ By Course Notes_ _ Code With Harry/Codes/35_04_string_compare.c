#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char a[100], b[100];
    printf("enter two strings:\n");
    gets(a);
    gets(b);
    int length = strcmp(a, b);
    if (length == 0)
    {
        printf("strings are equal ");
    }
    else if (length > 0)
    {
        printf("%s string is greater ", a);
    }
    else
    {
        printf("%s string is greater", b);
    }
}
