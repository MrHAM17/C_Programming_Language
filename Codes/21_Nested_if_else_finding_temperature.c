#include <stdio.h>
#include <conio.h>
int main()
{
    float temp;
    printf("\nEnter the temperature.\n");
    scanf("%f", &temp);

    if (temp <= 0)
    {
        printf("Freezing Wheather!");
    }
    else if (temp > 0 && temp <=10)
    {
        printf("Very Cold Wheather!");
    }
    else if (temp > 10 && temp <= 20)
    {
        printf("Cold Wheather!");
    }
    else if (temp > 20 && temp <= 30)
    {
        printf("Normal Temperature!");
    }
    else if (temp > 30 && temp <= 40)
    {
        printf("It is hot!");
    }
    else
    {
        printf("It's Very hot!");
    }
    return 0;
}

