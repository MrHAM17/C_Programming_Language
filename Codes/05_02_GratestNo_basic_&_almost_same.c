#include <stdio.h>

// THIS CODE IS SIMPLE AS IT TAKES ONLY 4 VALUES FROM USER OMLY........................................

///     This for FLOAT DATA TYPE.....////////////


float max(float x, float y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
   
   float a,b,c,d;

    printf("Enter the firet number \n");
    scanf("%f",&a);

    printf("Enter the second number \n");
    scanf("%f",&b);

    printf("Enter the third number\n");
    scanf("%f",&c);

    printf("Enter the fourth number\n");
    scanf("%f",&d);

    float left_max = max(a, b);
    float right_max = max(c, d);
    float final_max = max(left_max, right_max);
    printf("Maximum number is: %f", final_max);
}