#include <stdio.h>
void main()
{
   int j,i,n;
   printf("From 1 to which number, you want tables ?\n");
   scanf("%d",&n);
   printf("\nMultiplication table from 1 to %d \n\n",n);
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=n;j++)
     {
       if (j<=n-1)
           printf("%dx%d = %d,\t",j,i,i*j);
          else
	    printf("%dx%d = %d\n",j,i,i*j);

      }
     printf("\n");
    }
} 
