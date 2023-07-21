#include<stdio.h>
#include <string.h>
#define MAX_EMP 3
#define MAX_LEN 10

int main()
{
    char e[MAX_EMP][MAX_LEN + 1];
    printf("\n");
    for (int i = 0; i < MAX_EMP; i++)
    {
        printf("Enter Employee ID of Employee : %d\n", i + 1);
        fgets(e[i],MAX_LEN + 1,stdin);
    }
    printf("\n");
    for (int i = 0; i < MAX_EMP; i++)
        printf("ID of Employee  %d is %s\n", i + 1, e[i]);

    return 0;
}