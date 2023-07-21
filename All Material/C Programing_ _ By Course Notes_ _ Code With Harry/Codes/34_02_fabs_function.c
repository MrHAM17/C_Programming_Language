#include <stdio.h>
#include <math.h>
int main()
{
    double x, result;
    x = -1.5;
    result = fabs(x);
    printf("|%.2lf| = %.2lf\n", x,
           result);
    return 0;
}