#include <stdio.h>
#include <math.h>
int powerres(int base, int power)
{
    return pow(base, power);
}
int main()
{
    int base, power, result;
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the power raised: ");
    scanf("%d", &power);
    result = powerres(base, power);
    printf("%d^%d = %d", base, power,
           result);
    return 0;
}
