#include<stdio.h>

/////////////Converting celcius temperature to farnhite temperature................

float F_Temp(float CEL_TEMP);
int main()
{
     float C_Temp;
     printf("Enter the value of celcius temperature \n");
     scanf("%f" , &C_Temp);

     printf("The value of this %.4f celcius temperature into farhnhite temperature is %.4f \n" , C_Temp , F_Temp(C_Temp));

    return 0;
}

float F_Temp(float CEL_TEMP)
{
   float result = (CEL_TEMP * 9/5) + 32 ;
   return result;

}