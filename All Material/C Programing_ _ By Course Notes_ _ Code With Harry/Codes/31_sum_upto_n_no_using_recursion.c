// Explain the term recursion. Write a program to find summation of n numbers using recursion.

// A function that calls itself is known as a recursive function. And, this technique is known as recursion. Program:

#include <stdio.h>
#include <conio.h>
int addNumbers(int n);
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
    return 0;
}
int addNumbers(int n)
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}