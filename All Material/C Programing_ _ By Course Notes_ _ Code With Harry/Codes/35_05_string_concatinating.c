#include <conio.h>
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100], b[100];
    printf("enter two strings :\n");
    gets(a);
    gets(b);
    strcat(a, b);
    printf("the concatenated strig is % s", a);
}