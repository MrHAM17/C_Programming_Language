// Write a program in C to find the reverse of a given string without using inbuilt string function. Program:
#include <stdio.h>
#include <string.h>

void main()
{
    int i, n;
    char str[20];
    printf("Enter the String to get reversed: ");
    gets(str);
    n = strlen(str);
    printf("\nReversed string is ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}