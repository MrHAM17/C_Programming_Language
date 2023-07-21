#include <stdio.h>
#include <math.h>
int main()
{
    double num = 2.33;
    int result;
    result = floor(num);
    printf("Floor integer of %.2f = %d",
           num, result);
    return 0;
}